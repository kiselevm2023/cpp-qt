#pragma once

#include <QMainWindow>
#include <prac/QTimer>
#include <prac/QMediaPlayer>
#include <prac/QTime>
#include <prac/QDateTime>
//#include <QAudioOutput>
#include <prac/QFileDialog>

#include <QMediaPlayer>

// Конструкция if-endif позволяет проверить версию Qt.
#if QT_VERSION >= 0x060000
#include <QAudioOutput>
#endif

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void CheckNowWithOneShot();
    void on_pb_start_stop_clicked();
    void on_action_load_file_triggered();

private:
    QMediaPlayer player_{this};
#if QT_VERSION >= 0x060000
    QAudioOutput audio_output_{this};
#endif
    QString TimeToString(prac::QDateTime t);
    Ui::MainWindow *ui;
    prac::QTimer timer_one_sec_{this};
    prac::QDateTime now_;
    std::pair<prac::QDateTime, bool> alarm_;
    QString file_name_;
};
