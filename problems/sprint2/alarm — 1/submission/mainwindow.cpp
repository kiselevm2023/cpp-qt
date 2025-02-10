#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <prac/QFileDialog>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    timer_one_sec_.setSingleShot(true);
    connect(&timer_one_sec_, &prac::QTimer::timeout, this, &MainWindow::updateCurrentTime);


    updateCurrentTime();


    connect(ui->action_load_file, &QAction::triggered, this, &MainWindow::selectMelody);
    connect(ui->action_close, &QAction::triggered, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateCurrentTime()
{
    auto now = prac::QDateTime::currentDateTime();
    ui->lbl_now->setText(now.toString("HH:mm:ss"));


    QTime current_time = prac::QTime::currentTime();
    int ms_to_next_second = 1000 - current_time.msec();
    timer_one_sec_.start(ms_to_next_second);
}

void MainWindow::selectMelody()
{
    QString file_name = prac::QFileDialog::getOpenFileName(this,
                                                           QString::fromUtf8("Открыть файл"), QDir::currentPath(), "*.wav;*.mp3");

    if (!file_name.isEmpty()) {
        melody_file_ = file_name;
        QFileInfo file_info(file_name);
        ui->lbl_melody->setText(file_info.fileName());
    }
}

void MainWindow::on_pb_start_stop_clicked()
{
    if (alarm_active_) {
        stopAlarm();
    } else {
        startAlarm();
    }
}

void MainWindow::startAlarm()
{
    auto now = prac::QDateTime::currentDateTime();

    alarm_time_.setTime(QTime(
        ui->sb_hour->value(),
        ui->sb_min->value(),
        ui->sb_sec->value()
        ));

    if (alarm_time_ < now) {
        alarm_time_ = alarm_time_.addDays(1);
    }

    int seconds_to_alarm = ((alarm_time_.toMSecsSinceEpoch() - now.toMSecsSinceEpoch()) + 500) / 1000;
    alarm_timer_.start(seconds_to_alarm * 1000);

    ui->pb_start_stop->setText("Стоп");
    ui->lbl_timeout->setText(QString("До будильника: %1 секунд").arg(seconds_to_alarm));
    alarm_active_ = true;
}

void MainWindow::stopAlarm()
{
    alarm_timer_.stop();
    player_.stop();
    ui->pb_start_stop->setText("Старт");
    ui->lbl_timeout->setText("Установите будильник");
    alarm_active_ = false;
}

void MainWindow::playMelody()
{
    if (!melody_file_.isEmpty()) {
        player_.setSource(QUrl::fromLocalFile(melody_file_));
        player_.play();
    }
    ui->lbl_timeout->setText("Пора вставать!");
}
