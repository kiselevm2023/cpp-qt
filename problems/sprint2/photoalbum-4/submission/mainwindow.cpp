#include "mainwindow.h"
#include "ui_mainwindow.h"

QPixmap ResizeImgToFit(const QPixmap &src, int window_width, int window_height) {
    int img_w = src.width();
    int img_h = src.height();
    double w_ratio = double(img_w) / window_width;
    double h_ratio = double(img_h) / window_height;
    return (w_ratio < h_ratio) ? src.scaledToWidth(window_width) : src.scaledToHeight(window_height);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    lbl_img.setAlignment(Qt::AlignCenter);

    connect(ui->btn_left, &QPushButton::clicked, this, &MainWindow::PrevImage);
    connect(ui->btn_right, &QPushButton::clicked, this, &MainWindow::NextImage);

    action_up_windows = ui->action_up_windows;
    action_use_resources = ui->action_use_resources;
    action_choose_dir = ui->action_choose_dir;
    action_0sec = ui->action_0sec;
    action_1sec = ui->action_1sec;
    action_5sec = ui->action_5sec;
    action_10sec = ui->action_10sec;

   // menu = ui->menu;
    //menu_2 = ui->menu_2;
    //connect(ui->action_3, &QAction::triggered, qApp, &QApplication::quit);
    connect(action_up_windows, &QAction::triggered, this, &MainWindow::ToggleStayOnTop);
    connect(action_use_resources, &QAction::triggered, [this]() { SetFolder(":/cats/images/"); });
    connect(action_choose_dir, &QAction::triggered, this, &MainWindow::SelectFolder);

    connect(action_0sec, &QAction::triggered, this, &MainWindow::StopTimer);
    connect(action_1sec, &QAction::triggered, [this]() { StartTimer(1000); });
    connect(action_5sec, &QAction::triggered, [this]() { StartTimer(5000); });
    connect(action_10sec, &QAction::triggered, [this]() { StartTimer(10000); });

    connect(&timer_, &prac::QTimer::timeout, this, &MainWindow::NextImage);

    ui->menuBar->hide();
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QMainWindow::customContextMenuRequested, this, &MainWindow::slotCustomMenuRequested);

    SetFolder(":/cats/images/");
    FitImage();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::FitImage() {
    if (active_pixmap.isNull()) return;
    lbl_img.setPixmap(ResizeImgToFit(active_pixmap, lbl_img.width(), lbl_img.height()));
}

void MainWindow::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
    lbl_img.setGeometry(0, 0, width(), height());
    FitImage();
}

void MainWindow::SetPixmap(const QString& path) {
    if (!path.isEmpty()) {
        active_pixmap.load(path);
        FitImage();
    }
}

void MainWindow::SetFolder(const QString& folder) {
    current_folder_ = folder;
    cur_file_index_ = 0;

    QDir dir(current_folder_);
    QStringList filters{"*.jpg", "*.jpeg", "*.png"};
    image_files_ = dir.entryList(filters, QDir::Files);

    auto result = FindNextImage(0, 1);
    active_pixmap = result.first;
    cur_file_index_ = result.second;

    if (!active_pixmap.isNull()) {
        FitImage();
        UpdateEnabled();
    } else {
        lbl_img.clear();
        ui->btn_left->setEnabled(false);
        ui->btn_right->setEnabled(false);
    }
}

QString MainWindow::GetCurrentFile() const {
    if (image_files_.isEmpty() || cur_file_index_ < 0 || cur_file_index_ >= image_files_.size()) {
        return {};
    }
    return QDir(current_folder_).filePath(image_files_[cur_file_index_]);
}

void MainWindow::NextImage() {
    auto result = FindNextImage(cur_file_index_ + 1, 1);
    if (!result.first.isNull()) {
        active_pixmap = result.first;
        cur_file_index_ = result.second;
        FitImage();
        UpdateEnabled();
    }
}

void MainWindow::PrevImage() {
    auto result = FindNextImage(cur_file_index_ - 1, -1);
    if (!result.first.isNull()) {
        active_pixmap = result.first;
        cur_file_index_ = result.second;
        FitImage();
        UpdateEnabled();
    }
}

void MainWindow::UpdateEnabled() {
    bool hasImages = !image_files_.isEmpty();
    ui->btn_left->setEnabled(hasImages);
    ui->btn_right->setEnabled(hasImages);
}

void MainWindow::ToggleStayOnTop() {
    bool stayOnTop = !windowFlags().testFlag(Qt::WindowStaysOnTopHint);
    setWindowFlags(windowFlags().setFlag(Qt::WindowStaysOnTopHint, stayOnTop));
    show();
}

void MainWindow::SelectFolder() {
    QString dir = prac::QFileDialog::getExistingDirectory(this, "Выберите папку");
    if (!dir.isEmpty()) {
        SetFolder(dir);
    }
}

void MainWindow::StartTimer(int interval) {
    timer_.start(interval);
    action_0sec->setChecked(false);
    action_1sec->setChecked(interval == 1000);
    action_5sec->setChecked(interval == 5000);
    action_10sec->setChecked(interval == 10000);
}

void MainWindow::StopTimer() {
    timer_.stop();
    action_0sec->setChecked(true);
    action_1sec->setChecked(false);
    action_5sec->setChecked(false);
    action_10sec->setChecked(false);
}

void MainWindow::slotCustomMenuRequested(QPoint pos) {
    ui->menu->popup(mapToGlobal(pos));
}

QPixmap MainWindow::GetImageByPath(const QString& path) const {
    return QPixmap(path);
}

std::pair<QPixmap, int> MainWindow::FindNextImage(int start_index, int direction) const {
    int count = image_files_.size();
    for (int i = 0; i < count; ++i) {
        int idx = (start_index + i * direction + count) % count;
        QPixmap pixmap = GetImageByPath(QDir(current_folder_).filePath(image_files_[idx]));
        if (!pixmap.isNull()) {
            return {pixmap, idx};
        }
    }
    return {{}, -1};
}

