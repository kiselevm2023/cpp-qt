#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include "magic_horoscope.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIntValidator* yearValidator = new QIntValidator(1, 9999, this);
    ui->le_year->setValidator(yearValidator);
    ui->cb_month->addItems({"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
                            "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"});
    ui->sb_day->setEnabled(false);
    ui->cb_month->setEnabled(false);
    ui->gb_horoscope->setEnabled(false);
    ui->sb_day->setValue(1);
    ui->cb_month->setCurrentIndex(0);
    MakeMagic();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::MakeMagic(){
    ui->lbl_calendar->clear();
    ui->lbl_horoscope->clear();
    int year = ui->le_year->text().toInt();
    if (ui->le_year->text().isEmpty()) {
        ui->lbl_calendar->setText("Введите год");
        return;
    }

    if(calendar_ == Calendar::kEastern){

        MakeEasternHoroscope(year);
    }
    else if(calendar_ == Calendar::kTibetan){
        MakeTibetanHoroscope(year);

    }
    else if(calendar_ == Calendar::kZoroastrian){
        MakeZoroastrianHoroscope(year);
    }
    if(ui->cb_is_date->isChecked()){
        int day = ui->sb_day->value();
        int month = ui->cb_month->currentIndex() + 1;
        if(horoscope_ == Horoscope::kZodiac){
            MakeZodiacHoroscope(day, month);
        }else if (horoscope_ == Horoscope::kDruid) {
            MakeDruidHoroscope(day, month);
        }
    }else {
        ui->lbl_horoscope->setText("Ввод даты отключён");
    }
}

void MainWindow::on_rb_eastern_clicked()
{
    calendar_ = Calendar::kEastern;
    MakeMagic();
}




void MainWindow::on_le_year_textChanged(const QString &arg1)
{
    if(arg1.isEmpty()){
        ui->lbl_calendar->setText("Введите год");
    }else{
        MakeMagic();
    }
}

void MainWindow::MakeEasternHoroscope(int year)
{
    QString animal = GetAnimalForEasternCalendar(year);
    QString element = GetElementForEasternCalendar(year);
    ui->lbl_calendar->setText(QString("%1 — это год %2. Стихия/цвет — %3.")
                                  .arg(year)
                                  .arg(animal)
                                  .arg(element));
}

void MainWindow::MakeTibetanHoroscope(int year)
{
    QString animal = GetAnimalForTibetanCalendar(year);
    ui->lbl_calendar->setText(QString("%1 — это год %2.").arg(year).arg(animal));
}

void MainWindow::MakeZoroastrianHoroscope(int year)
{
    QString animal = GetAnimalForZoroastrianCalendar(year);
    ui->lbl_calendar->setText(QString("%1 — это год %2.").arg(year).arg(animal));
}

void MainWindow::MakeZodiacHoroscope(int day, int month)
{
    int year = ui->le_year->text().toInt();
    QString zodiac = GetZodiac(day, month - 1, year);
    int m = month;
    if (zodiac.isEmpty()) {
        ui->lbl_horoscope->setText("Такой даты не существует");
    } else {
        ui->lbl_horoscope->setText(QString("%1.%2 — ваш знак зодиака %3 по зодиакальному гороскопу.")
                                       .arg(day, 2, 10, QChar('0'))
                                       .arg(m, 2, 10, QChar('0'))
                                       .arg(zodiac));
    }
}

void MainWindow::MakeDruidHoroscope(int day, int month)
{
    int year = ui->le_year->text().toInt();
    QString tree = GetTree(day, month, year);
    if (tree.isEmpty()) {
        ui->lbl_horoscope->setText("Такой даты не существует");
    } else {
        ui->lbl_horoscope->setText(QString("%1.%2 — ваше тотемное дерево %3 по гороскопу друидов.")
                                       .arg(day, 2, 10, QChar('0'))
                                       .arg(month, 2, 10, QChar('0'))
                                       .arg(tree));
    }
}

void MainWindow::on_rb_tibetan_clicked()
{
    calendar_ = Calendar::kTibetan;
    MakeMagic();
}


void MainWindow::on_rb_zoroastrian_clicked()
{
    calendar_ = Calendar::kZoroastrian;
    MakeMagic();
}


void MainWindow::on_cb_is_date_clicked(bool checked)
{
    ui->sb_day->setEnabled(checked);
    ui->cb_month->setEnabled(checked);
    ui->gb_horoscope->setEnabled(checked);
    MakeMagic();
}


void MainWindow::on_sb_day_valueChanged(int arg1)
{
    MakeMagic();
}


void MainWindow::on_cb_month_currentIndexChanged(int index)
{
    MakeMagic();
}


void MainWindow::on_rb_zodiac_clicked()
{
    horoscope_ = Horoscope::kZodiac;
    MakeMagic();
}


void MainWindow::on_rb_druid_clicked()
{
    horoscope_ = Horoscope::kDruid;
    MakeMagic();
}
