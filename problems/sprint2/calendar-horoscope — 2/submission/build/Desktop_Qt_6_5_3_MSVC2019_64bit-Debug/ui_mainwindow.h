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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *le_year;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_eastern;
    QRadioButton *rb_tibetan;
    QRadioButton *rb_zoroastrian;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(577, 633);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        le_year = new QLineEdit(centralwidget);
        le_year->setObjectName("le_year");

        verticalLayout->addWidget(le_year);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        rb_eastern = new QRadioButton(groupBox);
        rb_eastern->setObjectName("rb_eastern");
        rb_eastern->setChecked(true);

        horizontalLayout->addWidget(rb_eastern);

        rb_tibetan = new QRadioButton(groupBox);
        rb_tibetan->setObjectName("rb_tibetan");

        horizontalLayout->addWidget(rb_tibetan);

        rb_zoroastrian = new QRadioButton(groupBox);
        rb_zoroastrian->setObjectName("rb_zoroastrian");

        horizontalLayout->addWidget(rb_zoroastrian);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\320\270 \320\270 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277\321\213", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        rb_eastern->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\202\320\276\321\207\320\275\321\213\320\271", nullptr));
        rb_tibetan->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\261\320\265\321\202\321\201\320\272\320\270\320\271", nullptr));
        rb_zoroastrian->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\321\200\320\276\320\260\321\201\321\202\321\200\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
