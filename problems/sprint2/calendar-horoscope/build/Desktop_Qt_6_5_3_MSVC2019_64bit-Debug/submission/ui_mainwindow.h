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
#include <QtWidgets/QComboBox>
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
    QHBoxLayout *horizontalLayout_4;
    QLabel *Ibl_yar;
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
    QWidget *w_date;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_day;
    QSpinBox *sb_day;
    QLabel *lbl_month;
    QComboBox *cb_month;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_desk;
    QLabel *lbl_calendar;
    QLabel *lbl_horoscope;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(516, 447);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Ibl_yar = new QLabel(centralwidget);
        Ibl_yar->setObjectName("Ibl_yar");

        horizontalLayout_4->addWidget(Ibl_yar);

        le_year = new QLineEdit(centralwidget);
        le_year->setObjectName("le_year");

        horizontalLayout_4->addWidget(le_year);


        verticalLayout->addLayout(horizontalLayout_4);

        gb_calendar = new QGroupBox(centralwidget);
        gb_calendar->setObjectName("gb_calendar");
        horizontalLayout = new QHBoxLayout(gb_calendar);
        horizontalLayout->setObjectName("horizontalLayout");
        rb_eastern = new QRadioButton(gb_calendar);
        rb_eastern->setObjectName("rb_eastern");

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

        horizontalLayout_2->addWidget(rb_zodiac);

        rb_druid = new QRadioButton(gb_horoscope);
        rb_druid->setObjectName("rb_druid");

        horizontalLayout_2->addWidget(rb_druid);


        verticalLayout->addWidget(gb_horoscope);

        w_date = new QWidget(centralwidget);
        w_date->setObjectName("w_date");
        horizontalLayout_3 = new QHBoxLayout(w_date);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lbl_day = new QLabel(w_date);
        lbl_day->setObjectName("lbl_day");

        horizontalLayout_3->addWidget(lbl_day);

        sb_day = new QSpinBox(w_date);
        sb_day->setObjectName("sb_day");

        horizontalLayout_3->addWidget(sb_day);

        lbl_month = new QLabel(w_date);
        lbl_month->setObjectName("lbl_month");

        horizontalLayout_3->addWidget(lbl_month);

        cb_month = new QComboBox(w_date);
        cb_month->setObjectName("cb_month");

        horizontalLayout_3->addWidget(cb_month);

        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(3, 1);

        verticalLayout->addWidget(w_date);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lbl_desk = new QLabel(widget);
        lbl_desk->setObjectName("lbl_desk");

        verticalLayout_3->addWidget(lbl_desk);

        lbl_calendar = new QLabel(widget);
        lbl_calendar->setObjectName("lbl_calendar");

        verticalLayout_3->addWidget(lbl_calendar);

        lbl_horoscope = new QLabel(widget);
        lbl_horoscope->setObjectName("lbl_horoscope");
        lbl_horoscope->setEnabled(true);

        verticalLayout_3->addWidget(lbl_horoscope);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\320\270 \320\270 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277\321\213", nullptr));
        Ibl_yar->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\264", nullptr));
        gb_calendar->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        rb_eastern->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\202\320\276\321\207\320\275\321\213\320\271", nullptr));
        rb_tibetan->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\261\320\265\321\202\321\201\320\272\320\270\320\271", nullptr));
        rb_zoroastrian->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\321\200\320\276\320\260\321\201\321\202\321\200\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        cb_is_date->setText(QCoreApplication::translate("MainWindow", "\320\262\320\262\320\276\320\264 \320\264\320\260\321\202\321\213", nullptr));
        gb_horoscope->setTitle(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\321\201\320\272\320\276\320\277", nullptr));
        rb_zodiac->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\264\320\270\320\260\320\272\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        rb_druid->setText(QCoreApplication::translate("MainWindow", "\320\224\321\200\321\203\320\270\320\264\320\276\320\262", nullptr));
        lbl_day->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214", nullptr));
        lbl_month->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        lbl_desk->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">\320\222\320\260\321\210 \320\274\320\260\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277:</span></p></body></html>", nullptr));
        lbl_calendar->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\263\320\276\320\264", nullptr));
        lbl_horoscope->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\321\202\321\213 \320\276\321\202\320\272\320\273\321\216\321\207\320\265\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
