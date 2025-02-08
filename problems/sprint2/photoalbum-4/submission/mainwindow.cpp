#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QFileDialog>

// Функция подгоняет изображение под нужный размер окна.


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer_(this)
{
    ui->setupUi(this);
    SetFolder(resources_path_);
    ui->menuBar->hide();
    this->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QMainWindow::customContextMenuRequested,
            this, &MainWindow::slotCustomMenuRequested);
    connect(ui->action_up_windows, &QAction::triggered, this, &MainWindow::slotSetWindowStayOnTopHint);
    connect(&timer_, &QTimer::timeout, this, &MainWindow::slotSetTimerFor1Sec);
    connect(&timer_, &QTimer::timeout, this, &MainWindow::slotSetTimerFor5Sec);
    connect(&timer_, &QTimer::timeout, this, &MainWindow::slotSetTimerFor10Sec);
    connect(&timer_, &QTimer::timeout, this, &MainWindow::slotStopTimer);
    connect(ui->action_use_resources, &QAction::triggered, this, &MainWindow::slotUseResources);
    connect(ui->action_choose_dir, &QAction::triggered, this, &MainWindow::slotGetExistingDirectory);
    connect(ui->action_1sec, &QAction::triggered, this, &MainWindow::slotSetTimerFor1Sec);
    connect(ui->action_5sec, &QAction::triggered, this, &MainWindow::slotSetTimerFor5Sec);
    connect(ui->action_10sec, &QAction::triggered, this, &MainWindow::slotSetTimerFor10Sec);
    connect(ui->action_0sec, &QAction::triggered, this, &MainWindow::slotStopTimer);
    connect(ui->action_close, &QAction::triggered, this, &MainWindow::slotClose);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetFolder(const QString& d)
{
    dir_ = QDir{d};
    pix_.act_pix = GetImageByPath(GetCurrentFile());
}

QPixmap MainWindow::ResizeImgToFit(const QPixmap &src, int window_width, int window_height)
{
    int img_w = src.width();
    int img_h = src.height();

    double w_ratio = double(img_w) / window_width;
    double h_ratio = double(img_h) / window_height;

    if ( w_ratio > h_ratio ) {
        return src.scaledToHeight(window_height);
    } else {
        return src.scaledToWidth(window_width);
    }
}

void MainWindow::FitImage()
{
    Q_ASSERT(!pix_.act_pix.isNull());

    // Напишите этот метод.
    QPixmap pix = ResizeImgToFit(pix_.act_pix, this->width(), this->height());// 1. Вызовите ResizeImgToFit.
    lbl_new_.setPixmap(pix);// 2. Поместите изображение в lbl_img.
    lbl_new_.resize(pix.size());// 3. Измените размер lbl_img.
    int lbl_width = ((this->width() - pix.width()) / 2);
    int lbl_height = ((this->height() - pix.height()) / 2);
    lbl_new_.move(lbl_width, lbl_height);// 4. Переместите lbl_img, пользуясь формулами из условия.
}

void MainWindow::resizeEvent(QResizeEvent*)
{
    FitImage();
}

QString MainWindow::GetCurrentFile()
{
    QStringList files = dir_.entryList();
    int count = files.size();
    if (count == 0) {
        return "";
    }
    int file_index = pix_.pix_index;
    file_index = ((file_index % count) + count) % count;
    pix_.pix_index = file_index;
    // Используем file_index, а не cur_file_index_.
    return dir_.filePath(files[pix_.pix_index]);
}

QPixmap MainWindow::GetImageByPath(QString path) const {
    QFileInfo file_info(path);
    if (!file_info.isFile()) {
        return {};
    }
    return QPixmap(path);
}

std::pair<QPixmap, int> MainWindow::FindNextImage(int direction) {
    QStringList files = dir_.entryList();
    int count = files.size();
    int cur_image = pix_.pix_index;

    for(int steps = 0; steps < count; ++steps, cur_image += direction) {
        cur_image = ((cur_image % count) + count) % count;
        auto pixmap = GetImageByPath(dir_.filePath(files[cur_image]));
        if (!pixmap.isNull()) {
            ui->btn_left->setEnabled(true);
            ui->btn_right->setEnabled(true);
            return {pixmap, cur_image};
        }
    }
    ui->btn_left->setEnabled(false);
    ui->btn_right->setEnabled(false);
    return {{}, -1};
}

void MainWindow::GoBack()
{
    if (pix_.pix_index == 0) {
        pix_.pix_index = dir_.entryList().size() - 1;
    }
    std::pair<QPixmap, int> pair = FindNextImage(-1);
    pix_.act_pix = pair.first;
    pix_.pix_index = pair.second;
    FitImage();
}

void MainWindow::GoAhead()
{
    if (pix_.pix_index == dir_.entryList().size() - 1) {
        pix_.pix_index = 0;
    }
    std::pair<QPixmap, int> pair = FindNextImage(1);
    pix_.act_pix = pair.first;
    pix_.pix_index = pair.second;
    FitImage();
}

void MainWindow::slotCustomMenuRequested(QPoint pos)
{
    ui->menu->popup(this->mapToGlobal(pos));
}

void MainWindow::slotSetWindowStayOnTopHint()
{
    state_ = true;
    setWindowFlags(windowFlags().setFlag(Qt::WindowStaysOnTopHint, state_));
    ui->action_up_windows->setChecked(true);
    show();
}

void MainWindow::slotClose()
{
    ui->menuBar->hide();
    state_ = false;
}

void MainWindow::slotUseResources()
{
    SetFolder(resources_path_);
    FitImage();
}

void MainWindow::slotGetExistingDirectory()
{
    QString new_dir_path = QFileDialog::getExistingDirectory(this, QString("Открыть папку"), QDir::currentPath(), QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if(new_dir_path.isEmpty()) {
        pix_.act_pix = {};
        ui->btn_left->setEnabled(false);
        ui->btn_right->setEnabled(false);
        return;
    }
    SetFolder(new_dir_path);
    FitImage();
    ui->btn_left->setEnabled(true);
    ui->btn_right->setEnabled(true);
}

void MainWindow::slotSetTimerFor1Sec() {
    period_ = 1000;
    timer_.start(period_);
    GoAhead();
    ui->action_0sec->setChecked(period_ == 0);
    ui->action_1sec->setChecked(period_ == 1000);
    ui->action_5sec->setChecked(period_ == 5000);
    ui->action_10sec->setChecked(period_ == 10000);
}

void MainWindow::slotSetTimerFor5Sec() {
    period_ = 5000;
    timer_.start(period_);
    GoAhead();
    ui->action_0sec->setChecked(period_ == 0);
    ui->action_1sec->setChecked(period_ == 1000);
    ui->action_5sec->setChecked(period_ == 5000);
    ui->action_10sec->setChecked(period_ == 10000);
}

void MainWindow::slotSetTimerFor10Sec() {
    period_ = 10000;
    timer_.start(period_);
    GoAhead();
    ui->action_0sec->setChecked(period_ == 0);
    ui->action_1sec->setChecked(period_ == 1000);
    ui->action_5sec->setChecked(period_ == 5000);
    ui->action_10sec->setChecked(period_ == 10000);
}

void MainWindow::slotStopTimer()
{
    period_ = 0;
    timer_.start(period_);
    ui->action_0sec->setChecked(period_ == 0);
    ui->action_1sec->setChecked(period_ == 1000);
    ui->action_5sec->setChecked(period_ == 5000);
    ui->action_10sec->setChecked(period_ == 10000);
}

void MainWindow::on_btn_left_clicked()
{
    GoBack();
}


void MainWindow::on_btn_right_clicked()
{
    GoAhead();
}
