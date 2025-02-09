/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *le_year;
    QGroupBox *gb_calendar;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_eastern;
    QRadioButton *rb_tibetan;
    QRadioButton *rb_zoroastrian;
    QCheckBox *cb_is_date;
    QGroupBox *gb_horoscope;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rb_zodiac;
    QRadioButton *rb_druid;
    QGroupBox *w_date;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *sb_day;
    QSpinBox *cb_month;
    QSpacerItem *verticalSpacer;
    QGroupBox *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_desk;
    QLabel *lbl_calendar;
    QLabel *lbl_horoscope;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(577, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        le_year = new QLineEdit(centralwidget);
        le_year->setObjectName("le_year");

        verticalLayout->addWidget(le_year);

        gb_calendar = new QGroupBox(centralwidget);
        gb_calendar->setObjectName("gb_calendar");
        horizontalLayout = new QHBoxLayout(gb_calendar);
        horizontalLayout->setObjectName("horizontalLayout");
        rb_eastern = new QRadioButton(gb_calendar);
        rb_eastern->setObjectName("rb_eastern");
        rb_eastern->setChecked(true);

        horizontalLayout->addWidget(rb_eastern);

        rb_tibetan = new QRadioButton(gb_calendar);
        rb_tibetan->setObjectName("rb_tibetan");

        horizontalLayout->addWidget(rb_tibetan);

        rb_zoroastrian = new QRadioButton(gb_calendar);
        rb_zoroastrian->setObjectName("rb_zoroastrian");

        horizontalLayout->addWidget(rb_zoroastrian);


        verticalLayout->addWidget(gb_calendar);

        cb_is_date = new QCheckBox(centralwidget);
        cb_is_date->setObjectName("cb_is_date");

        verticalLayout->addWidget(cb_is_date);

        gb_horoscope = new QGroupBox(centralwidget);
        gb_horoscope->setObjectName("gb_horoscope");
        horizontalLayout_2 = new QHBoxLayout(gb_horoscope);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rb_zodiac = new QRadioButton(gb_horoscope);
        rb_zodiac->setObjectName("rb_zodiac");
        rb_zodiac->setChecked(true);

        horizontalLayout_2->addWidget(rb_zodiac);

        rb_druid = new QRadioButton(gb_horoscope);
        rb_druid->setObjectName("rb_druid");

        horizontalLayout_2->addWidget(rb_druid);


        verticalLayout->addWidget(gb_horoscope);

        w_date = new QGroupBox(centralwidget);
        w_date->setObjectName("w_date");
        horizontalLayout_3 = new QHBoxLayout(w_date);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        sb_day = new QSpinBox(w_date);
        sb_day->setObjectName("sb_day");

        horizontalLayout_3->addWidget(sb_day);

        cb_month = new QSpinBox(w_date);
        cb_month->setObjectName("cb_month");

        horizontalLayout_3->addWidget(cb_month);


        verticalLayout->addWidget(w_date);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QGroupBox(centralwidget);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lbl_desk = new QLabel(widget);
        lbl_desk->setObjectName("lbl_desk");

        verticalLayout_2->addWidget(lbl_desk);

        lbl_calendar = new QLabel(widget);
        lbl_calendar->setObjectName("lbl_calendar");

        verticalLayout_2->addWidget(lbl_calendar);

        lbl_horoscope = new QLabel(widget);
        lbl_horoscope->setObjectName("lbl_horoscope");

        verticalLayout_2->addWidget(lbl_horoscope);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\320\270 \320\270 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277\321\213", nullptr));
        le_year->setText(QString());
        gb_calendar->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        rb_eastern->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\202\320\276\321\207\320\275\321\213\320\271", nullptr));
        rb_tibetan->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\261\320\265\321\202\321\201\320\272\320\270\320\271", nullptr));
        rb_zoroastrian->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\321\200\320\276\320\260\321\201\321\202\321\200\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        cb_is_date->setText(QCoreApplication::translate("MainWindow", "\320\262\320\262\320\276\320\264 \320\264\320\260\321\202\321\213", nullptr));
        gb_horoscope->setTitle(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\321\201\320\272\320\276\320\277", nullptr));
        rb_zodiac->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\264\320\270\320\260\320\272\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        rb_druid->setText(QCoreApplication::translate("MainWindow", "\320\224\321\200\321\203\320\270\320\264\320\276\320\262", nullptr));
        w_date->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260", nullptr));
        widget->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264", nullptr));
        lbl_desk->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">\320\222\320\260\321\210 \320\274\320\260\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277:</span></p></body></html>", nullptr));
        lbl_calendar->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\263\320\276\320\264 </p></body></html>", nullptr));
        lbl_horoscope->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\262\320\276\320\264 \320\264\320\260\321\202\321\213 \320\276\321\202\320\272\320\273\321\216\321\207\320\265\320\275</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
