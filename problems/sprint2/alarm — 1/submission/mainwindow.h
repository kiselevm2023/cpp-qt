#pragma once

#include <QMainWindow>
#include <prac/QTimer>
#include <prac/QMediaPlayer>
#include <prac/QTime>
#include <prac/QDateTime>
#include <QAudioOutput>

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
    // Обновление текущего времени
    void updateCurrentTime();

    // Выбор мелодии для будильника
    void selectMelody();

    // Обработка нажатия кнопки "Старт/Стоп"
    void on_pb_start_stop_clicked();

    // Запуск будильника
    void startAlarm();

    // Остановка будильника или мелодии
    void stopAlarm();

    // Проигрывание выбранной мелодии
    void playMelody();

private:
    Ui::MainWindow *ui;

    // Таймеры для обновления времени и будильника
    prac::QTimer timer_one_sec_{this};
    prac::QTimer alarm_timer_{this};

    // Проигрыватель для мелодии будильника
    prac::QMediaPlayer player_{this};

    // Время срабатывания будильника
    prac::QDateTime alarm_time_;

    // Состояние будильника
    bool alarm_active_ = false;

    // Путь к выбранной мелодии
    QString melody_file_;
};
