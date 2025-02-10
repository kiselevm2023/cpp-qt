#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <prac/QFileDialog>
#include <prac/QTime>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    now_=prac::QDateTime::currentDateTime();
    alarm_.second=false;
    timer_one_sec_.start(1000-prac::QDateTime::currentDateTime().time().msec());
    timer_one_sec_.setSingleShot(true);
    ui->lbl_now->setText(TimeToString(now_));
    connect(&timer_one_sec_, &prac::QTimer::timeout, this, &MainWindow::CheckNowWithOneShot);

#if QT_VERSION >= 0x060000
    player_.setAudioOutput(&audio_output_);
    audio_output_.setVolume(100);
#else
    player_.setVolume(100);
#endif
}

void MainWindow::CheckNowWithOneShot(){
    now_=prac::QDateTime::currentDateTime();
    ui->lbl_now->setText(TimeToString(now_));
    now_=prac::QDateTime::currentDateTime();
    timer_one_sec_.start(1000-now_.time().msec());
    int countdown=((alarm_.first-now_).count()+500)/1000;
    QString countdown_to_lbl=QString::number(std::max(countdown,0));
    ui->lbl_timeout->setText(countdown_to_lbl);
    if (countdown==0){
        player_.play();
        alarm_.second=false;
    }

}

QString MainWindow::TimeToString(prac::QDateTime t)
{
    QString now_txt="%1:%2:%3";
    now_txt=now_txt.arg(t.time().hour(), 2, 10, QChar('0'))
                  .arg(t.time().minute(), 2, 10, QChar('0'))
                  .arg(t.time().second(), 2, 10, QChar('0'));
    return now_txt;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_start_stop_clicked()
{auto now = prac::QDateTime::currentDateTime();

    now_=prac::QDateTime::currentDateTime();
    alarm_.first.setDate(now_.date());
    prac::QTime altime;
    altime.setHMS(ui->sb_hour->text().toInt(),
                  ui->sb_min->text().toInt(),
                  ui->sb_sec->text().toInt(),0);
    alarm_.first.setTime(altime);
    ui->lbl_alarm->setText(alarm_.first.toString());
    alarm_.second=true;
#if QT_VERSION >= 0x060000
    player_.setSource(QUrl::fromLocalFile(file_name_));
#else
    player_.setMedia(QUrl::fromLocalFile(file_name_));
#endif
}


void MainWindow::on_action_load_file_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        QString("Открыть файл"),
        "F:\\Admin\\Desktop\\мр3-музыка",//QDir::currentPath(), // QDir::currentPath — текущая папка.
        "*.wav;*.mp3"
        );
    file_name_=fileName;
    ui->lbl_melody->setText(fileName);
}
