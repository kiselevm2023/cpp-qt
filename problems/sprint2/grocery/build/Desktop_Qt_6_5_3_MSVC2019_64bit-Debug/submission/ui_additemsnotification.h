/********************************************************************************
** Form generated from reading UI file 'additemsnotification.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMSNOTIFICATION_H
#define UI_ADDITEMSNOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItemsNotification
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *AddItemsNotification)
    {
        if (AddItemsNotification->objectName().isEmpty())
            AddItemsNotification->setObjectName("AddItemsNotification");
        AddItemsNotification->resize(333, 316);
        widget = new QWidget(AddItemsNotification);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 12, 261, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);

        verticalLayout->setStretch(0, 144);
        verticalLayout->setStretch(2, 233);

        retranslateUi(AddItemsNotification);
        QObject::connect(pushButton, &QPushButton::clicked, AddItemsNotification, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(AddItemsNotification);
    } // setupUi

    void retranslateUi(QDialog *AddItemsNotification)
    {
        AddItemsNotification->setWindowTitle(QCoreApplication::translate("AddItemsNotification", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("AddItemsNotification", "\320\237\320\276\320\273\320\276\320\266\320\270\321\202\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("AddItemsNotification", " \320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemsNotification: public Ui_AddItemsNotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMSNOTIFICATION_H
