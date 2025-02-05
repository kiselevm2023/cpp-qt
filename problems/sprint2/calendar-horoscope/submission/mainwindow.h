#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum class Calendar {
    kEastern,
    kTibetan,
    kZoroastrian
};

enum class Horoscope {
    kZodiac,
    kDruid
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_rb_eastern_clicked();
    void on_rb_tibetan_clicked();
    void on_rb_zoroastrian_clicked();
    void on_rb_zodiac_clicked();
    void on_rb_druid_clicked();
    void on_cb_is_date_clicked(bool checked);
    void on_le_year_textChanged(const QString &arg1);
    void on_sb_day_valueChanged(int arg1);
    void on_cb_month_currentIndexChanged(int index);

private:
    void MakeMagic();
    void MakeEasternHoroscope(int year);
    void MakeTibetanHoroscope(int year);
    void MakeZoroastrianHoroscope(int year);
    void MakeZodiacHoroscope(int day, int month);
    void MakeDruidHoroscope(int day, int month);

    Ui::MainWindow *ui;
    Calendar calendar_ = Calendar::kEastern;
    Horoscope horoscope_ = Horoscope::kZodiac;
    QLabel* lbl_calendar;   // Добавляем метки
    QLabel* lbl_horoscope;  // Добавляем метки
};
#endif // MAINWINDOW_H
