/********************************************************************************
** Form generated from reading UI file 'selector.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTOR_H
#define UI_SELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_Selector
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pb_fruit;
    QPushButton *pb_vegetable;
    QPushButton *pb_drink;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    ClickableLabel *lbl_item_1;
    QLabel *lbl_cost_1;
    QLabel *lbl_q_1;
    QHBoxLayout *horizontalLayout_4;
    ClickableLabel *lbl_item_2;
    QLabel *lbl_cost_2;
    QLabel *lbl_q_2;
    QHBoxLayout *horizontalLayout_5;
    ClickableLabel *lbl_item_3;
    QLabel *lbl_cost_3;
    QLabel *lbl_q_3;
    QHBoxLayout *horizontalLayout_8;
    ClickableLabel *lbl_item_6;
    QLabel *lbl_cost_6;
    QLabel *lbl_q_6;
    QHBoxLayout *horizontalLayout_6;
    ClickableLabel *lbl_item_4;
    QLabel *lbl_cost_4;
    QLabel *lbl_q_4;
    QHBoxLayout *horizontalLayout_7;
    ClickableLabel *lbl_item_5;
    QLabel *lbl_cost_5;
    QLabel *lbl_q_5;
    QHBoxLayout *horizontalLayout_11;
    ClickableLabel *lbl_item_9;
    QLabel *lbl_cost_9;
    QLabel *lbl_q_9;
    QHBoxLayout *horizontalLayout_9;
    ClickableLabel *lbl_item_7;
    QLabel *lbl_cost_7;
    QLabel *lbl_q_7;
    QHBoxLayout *horizontalLayout_10;
    ClickableLabel *lbl_item_8;
    QLabel *lbl_cost_8;
    QLabel *lbl_q_8;
    QHBoxLayout *horizontalLayout_14;
    ClickableLabel *lbl_item_12;
    QLabel *lbl_cost_12;
    QLabel *lbl_q_12;
    QHBoxLayout *horizontalLayout_12;
    ClickableLabel *lbl_item_10;
    QLabel *lbl_cost_10;
    QLabel *lbl_q_10;
    QHBoxLayout *horizontalLayout_13;
    ClickableLabel *lbl_item_11;
    QLabel *lbl_cost_11;
    QLabel *lbl_q_11;
    QHBoxLayout *horizontalLayout_17;
    ClickableLabel *lbl_item_15;
    QLabel *lbl_cost_15;
    QLabel *lbl_q_15;
    QHBoxLayout *horizontalLayout_15;
    ClickableLabel *lbl_item_13;
    QLabel *lbl_cost_13;
    QLabel *lbl_q_13;
    QHBoxLayout *horizontalLayout_16;
    ClickableLabel *lbl_item_14;
    QLabel *lbl_cost_14;
    QLabel *lbl_q_14;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_clear;
    QPushButton *btn_cart;
    QPushButton *btn_exit;

    void setupUi(QMainWindow *Selector)
    {
        if (Selector->objectName().isEmpty())
            Selector->setObjectName("Selector");
        Selector->resize(489, 424);
        centralWidget = new QWidget(Selector);
        centralWidget->setObjectName("centralWidget");
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(14, 30, 429, 361));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        pb_fruit = new QPushButton(widget);
        pb_fruit->setObjectName("pb_fruit");

        verticalLayout->addWidget(pb_fruit);

        pb_vegetable = new QPushButton(widget);
        pb_vegetable->setObjectName("pb_vegetable");

        verticalLayout->addWidget(pb_vegetable);

        pb_drink = new QPushButton(widget);
        pb_drink->setObjectName("pb_drink");

        verticalLayout->addWidget(pb_drink);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(4, 1);

        horizontalLayout->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(15);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lbl_item_1 = new ClickableLabel(widget);
        lbl_item_1->setObjectName("lbl_item_1");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_item_1->sizePolicy().hasHeightForWidth());
        lbl_item_1->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lbl_item_1);

        lbl_cost_1 = new QLabel(widget);
        lbl_cost_1->setObjectName("lbl_cost_1");

        horizontalLayout_3->addWidget(lbl_cost_1);

        lbl_q_1 = new QLabel(widget);
        lbl_q_1->setObjectName("lbl_q_1");
        sizePolicy1.setHeightForWidth(lbl_q_1->sizePolicy().hasHeightForWidth());
        lbl_q_1->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lbl_q_1);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lbl_item_2 = new ClickableLabel(widget);
        lbl_item_2->setObjectName("lbl_item_2");
        sizePolicy1.setHeightForWidth(lbl_item_2->sizePolicy().hasHeightForWidth());
        lbl_item_2->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lbl_item_2);

        lbl_cost_2 = new QLabel(widget);
        lbl_cost_2->setObjectName("lbl_cost_2");

        horizontalLayout_4->addWidget(lbl_cost_2);

        lbl_q_2 = new QLabel(widget);
        lbl_q_2->setObjectName("lbl_q_2");
        sizePolicy1.setHeightForWidth(lbl_q_2->sizePolicy().hasHeightForWidth());
        lbl_q_2->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lbl_q_2);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lbl_item_3 = new ClickableLabel(widget);
        lbl_item_3->setObjectName("lbl_item_3");
        sizePolicy1.setHeightForWidth(lbl_item_3->sizePolicy().hasHeightForWidth());
        lbl_item_3->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(lbl_item_3);

        lbl_cost_3 = new QLabel(widget);
        lbl_cost_3->setObjectName("lbl_cost_3");

        horizontalLayout_5->addWidget(lbl_cost_3);

        lbl_q_3 = new QLabel(widget);
        lbl_q_3->setObjectName("lbl_q_3");
        sizePolicy1.setHeightForWidth(lbl_q_3->sizePolicy().hasHeightForWidth());
        lbl_q_3->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(lbl_q_3);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_5, 0, 2, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        lbl_item_6 = new ClickableLabel(widget);
        lbl_item_6->setObjectName("lbl_item_6");
        sizePolicy1.setHeightForWidth(lbl_item_6->sizePolicy().hasHeightForWidth());
        lbl_item_6->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(lbl_item_6);

        lbl_cost_6 = new QLabel(widget);
        lbl_cost_6->setObjectName("lbl_cost_6");

        horizontalLayout_8->addWidget(lbl_cost_6);

        lbl_q_6 = new QLabel(widget);
        lbl_q_6->setObjectName("lbl_q_6");
        sizePolicy1.setHeightForWidth(lbl_q_6->sizePolicy().hasHeightForWidth());
        lbl_q_6->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(lbl_q_6);

        horizontalLayout_8->setStretch(0, 3);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lbl_item_4 = new ClickableLabel(widget);
        lbl_item_4->setObjectName("lbl_item_4");
        sizePolicy1.setHeightForWidth(lbl_item_4->sizePolicy().hasHeightForWidth());
        lbl_item_4->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(lbl_item_4);

        lbl_cost_4 = new QLabel(widget);
        lbl_cost_4->setObjectName("lbl_cost_4");

        horizontalLayout_6->addWidget(lbl_cost_4);

        lbl_q_4 = new QLabel(widget);
        lbl_q_4->setObjectName("lbl_q_4");
        sizePolicy1.setHeightForWidth(lbl_q_4->sizePolicy().hasHeightForWidth());
        lbl_q_4->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(lbl_q_4);

        horizontalLayout_6->setStretch(0, 3);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lbl_item_5 = new ClickableLabel(widget);
        lbl_item_5->setObjectName("lbl_item_5");
        sizePolicy1.setHeightForWidth(lbl_item_5->sizePolicy().hasHeightForWidth());
        lbl_item_5->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(lbl_item_5);

        lbl_cost_5 = new QLabel(widget);
        lbl_cost_5->setObjectName("lbl_cost_5");

        horizontalLayout_7->addWidget(lbl_cost_5);

        lbl_q_5 = new QLabel(widget);
        lbl_q_5->setObjectName("lbl_q_5");
        sizePolicy1.setHeightForWidth(lbl_q_5->sizePolicy().hasHeightForWidth());
        lbl_q_5->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(lbl_q_5);

        horizontalLayout_7->setStretch(0, 3);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_7, 1, 2, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        lbl_item_9 = new ClickableLabel(widget);
        lbl_item_9->setObjectName("lbl_item_9");
        sizePolicy1.setHeightForWidth(lbl_item_9->sizePolicy().hasHeightForWidth());
        lbl_item_9->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(lbl_item_9);

        lbl_cost_9 = new QLabel(widget);
        lbl_cost_9->setObjectName("lbl_cost_9");

        horizontalLayout_11->addWidget(lbl_cost_9);

        lbl_q_9 = new QLabel(widget);
        lbl_q_9->setObjectName("lbl_q_9");
        sizePolicy1.setHeightForWidth(lbl_q_9->sizePolicy().hasHeightForWidth());
        lbl_q_9->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(lbl_q_9);

        horizontalLayout_11->setStretch(0, 3);
        horizontalLayout_11->setStretch(1, 1);
        horizontalLayout_11->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        lbl_item_7 = new ClickableLabel(widget);
        lbl_item_7->setObjectName("lbl_item_7");
        sizePolicy1.setHeightForWidth(lbl_item_7->sizePolicy().hasHeightForWidth());
        lbl_item_7->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(lbl_item_7);

        lbl_cost_7 = new QLabel(widget);
        lbl_cost_7->setObjectName("lbl_cost_7");

        horizontalLayout_9->addWidget(lbl_cost_7);

        lbl_q_7 = new QLabel(widget);
        lbl_q_7->setObjectName("lbl_q_7");
        sizePolicy1.setHeightForWidth(lbl_q_7->sizePolicy().hasHeightForWidth());
        lbl_q_7->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(lbl_q_7);

        horizontalLayout_9->setStretch(0, 3);
        horizontalLayout_9->setStretch(1, 1);
        horizontalLayout_9->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_9, 2, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lbl_item_8 = new ClickableLabel(widget);
        lbl_item_8->setObjectName("lbl_item_8");
        sizePolicy1.setHeightForWidth(lbl_item_8->sizePolicy().hasHeightForWidth());
        lbl_item_8->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(lbl_item_8);

        lbl_cost_8 = new QLabel(widget);
        lbl_cost_8->setObjectName("lbl_cost_8");

        horizontalLayout_10->addWidget(lbl_cost_8);

        lbl_q_8 = new QLabel(widget);
        lbl_q_8->setObjectName("lbl_q_8");
        sizePolicy1.setHeightForWidth(lbl_q_8->sizePolicy().hasHeightForWidth());
        lbl_q_8->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(lbl_q_8);

        horizontalLayout_10->setStretch(0, 3);
        horizontalLayout_10->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_10, 2, 2, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        lbl_item_12 = new ClickableLabel(widget);
        lbl_item_12->setObjectName("lbl_item_12");
        sizePolicy1.setHeightForWidth(lbl_item_12->sizePolicy().hasHeightForWidth());
        lbl_item_12->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(lbl_item_12);

        lbl_cost_12 = new QLabel(widget);
        lbl_cost_12->setObjectName("lbl_cost_12");

        horizontalLayout_14->addWidget(lbl_cost_12);

        lbl_q_12 = new QLabel(widget);
        lbl_q_12->setObjectName("lbl_q_12");
        sizePolicy1.setHeightForWidth(lbl_q_12->sizePolicy().hasHeightForWidth());
        lbl_q_12->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(lbl_q_12);

        horizontalLayout_14->setStretch(0, 3);
        horizontalLayout_14->setStretch(1, 1);
        horizontalLayout_14->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_14, 3, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        lbl_item_10 = new ClickableLabel(widget);
        lbl_item_10->setObjectName("lbl_item_10");
        sizePolicy1.setHeightForWidth(lbl_item_10->sizePolicy().hasHeightForWidth());
        lbl_item_10->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(lbl_item_10);

        lbl_cost_10 = new QLabel(widget);
        lbl_cost_10->setObjectName("lbl_cost_10");

        horizontalLayout_12->addWidget(lbl_cost_10);

        lbl_q_10 = new QLabel(widget);
        lbl_q_10->setObjectName("lbl_q_10");
        sizePolicy1.setHeightForWidth(lbl_q_10->sizePolicy().hasHeightForWidth());
        lbl_q_10->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(lbl_q_10);

        horizontalLayout_12->setStretch(0, 3);
        horizontalLayout_12->setStretch(1, 1);
        horizontalLayout_12->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_12, 3, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        lbl_item_11 = new ClickableLabel(widget);
        lbl_item_11->setObjectName("lbl_item_11");
        sizePolicy1.setHeightForWidth(lbl_item_11->sizePolicy().hasHeightForWidth());
        lbl_item_11->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(lbl_item_11);

        lbl_cost_11 = new QLabel(widget);
        lbl_cost_11->setObjectName("lbl_cost_11");

        horizontalLayout_13->addWidget(lbl_cost_11);

        lbl_q_11 = new QLabel(widget);
        lbl_q_11->setObjectName("lbl_q_11");
        sizePolicy1.setHeightForWidth(lbl_q_11->sizePolicy().hasHeightForWidth());
        lbl_q_11->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(lbl_q_11);

        horizontalLayout_13->setStretch(0, 3);
        horizontalLayout_13->setStretch(1, 1);
        horizontalLayout_13->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_13, 3, 2, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        lbl_item_15 = new ClickableLabel(widget);
        lbl_item_15->setObjectName("lbl_item_15");
        sizePolicy1.setHeightForWidth(lbl_item_15->sizePolicy().hasHeightForWidth());
        lbl_item_15->setSizePolicy(sizePolicy1);

        horizontalLayout_17->addWidget(lbl_item_15);

        lbl_cost_15 = new QLabel(widget);
        lbl_cost_15->setObjectName("lbl_cost_15");

        horizontalLayout_17->addWidget(lbl_cost_15);

        lbl_q_15 = new QLabel(widget);
        lbl_q_15->setObjectName("lbl_q_15");
        sizePolicy1.setHeightForWidth(lbl_q_15->sizePolicy().hasHeightForWidth());
        lbl_q_15->setSizePolicy(sizePolicy1);

        horizontalLayout_17->addWidget(lbl_q_15);

        horizontalLayout_17->setStretch(0, 3);
        horizontalLayout_17->setStretch(1, 1);
        horizontalLayout_17->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_17, 4, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        lbl_item_13 = new ClickableLabel(widget);
        lbl_item_13->setObjectName("lbl_item_13");
        sizePolicy1.setHeightForWidth(lbl_item_13->sizePolicy().hasHeightForWidth());
        lbl_item_13->setSizePolicy(sizePolicy1);

        horizontalLayout_15->addWidget(lbl_item_13);

        lbl_cost_13 = new QLabel(widget);
        lbl_cost_13->setObjectName("lbl_cost_13");

        horizontalLayout_15->addWidget(lbl_cost_13);

        lbl_q_13 = new QLabel(widget);
        lbl_q_13->setObjectName("lbl_q_13");
        sizePolicy1.setHeightForWidth(lbl_q_13->sizePolicy().hasHeightForWidth());
        lbl_q_13->setSizePolicy(sizePolicy1);

        horizontalLayout_15->addWidget(lbl_q_13);

        horizontalLayout_15->setStretch(1, 1);
        horizontalLayout_15->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_15, 4, 1, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        lbl_item_14 = new ClickableLabel(widget);
        lbl_item_14->setObjectName("lbl_item_14");
        sizePolicy1.setHeightForWidth(lbl_item_14->sizePolicy().hasHeightForWidth());
        lbl_item_14->setSizePolicy(sizePolicy1);

        horizontalLayout_16->addWidget(lbl_item_14);

        lbl_cost_14 = new QLabel(widget);
        lbl_cost_14->setObjectName("lbl_cost_14");

        horizontalLayout_16->addWidget(lbl_cost_14);

        lbl_q_14 = new QLabel(widget);
        lbl_q_14->setObjectName("lbl_q_14");
        sizePolicy1.setHeightForWidth(lbl_q_14->sizePolicy().hasHeightForWidth());
        lbl_q_14->setSizePolicy(sizePolicy1);

        horizontalLayout_16->addWidget(lbl_q_14);

        horizontalLayout_16->setStretch(0, 3);
        horizontalLayout_16->setStretch(1, 1);
        horizontalLayout_16->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_16, 4, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_clear = new QPushButton(widget);
        btn_clear->setObjectName("btn_clear");

        horizontalLayout_2->addWidget(btn_clear);

        btn_cart = new QPushButton(widget);
        btn_cart->setObjectName("btn_cart");

        horizontalLayout_2->addWidget(btn_cart);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");

        horizontalLayout_2->addWidget(btn_exit);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(1, 1);
        Selector->setCentralWidget(centralWidget);

        retranslateUi(Selector);
        QObject::connect(btn_exit, &QPushButton::clicked, Selector, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Selector);
    } // setupUi

    void retranslateUi(QMainWindow *Selector)
    {
        Selector->setWindowTitle(QCoreApplication::translate("Selector", "\320\233\320\260\320\262\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("Selector", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pb_fruit->setText(QCoreApplication::translate("Selector", "\320\244\321\200\321\203\320\272\321\202\321\213", nullptr));
        pb_vegetable->setText(QCoreApplication::translate("Selector", "\320\236\320\262\320\276\321\211\320\270", nullptr));
        pb_drink->setText(QCoreApplication::translate("Selector", "\320\235\320\260\320\277\320\270\321\202\320\272\320\270", nullptr));
        lbl_item_1->setText(QCoreApplication::translate("Selector", "\320\257\320\261\320\273\320\276\320\272\320\270", nullptr));
        lbl_cost_1->setText(QCoreApplication::translate("Selector", "100", nullptr));
        lbl_q_1->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_2->setText(QCoreApplication::translate("Selector", "\320\232\320\260\321\200\321\202\320\276\321\204\320\265\320\273\321\214", nullptr));
        lbl_cost_2->setText(QCoreApplication::translate("Selector", "60", nullptr));
        lbl_q_2->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_3->setText(QCoreApplication::translate("Selector", "\320\234\320\276\320\273\320\276\320\272\320\276", nullptr));
        lbl_cost_3->setText(QCoreApplication::translate("Selector", "110", nullptr));
        lbl_q_3->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_6->setText(QCoreApplication::translate("Selector", "\320\247\320\260\320\271", nullptr));
        lbl_cost_6->setText(QCoreApplication::translate("Selector", "200", nullptr));
        lbl_q_6->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_4->setText(QCoreApplication::translate("Selector", "\320\237\320\265\321\200\321\201\320\270\320\272\320\270", nullptr));
        lbl_cost_4->setText(QCoreApplication::translate("Selector", "120", nullptr));
        lbl_q_4->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_5->setText(QCoreApplication::translate("Selector", "\320\234\320\276\321\200\320\272\320\276\320\262\321\214", nullptr));
        lbl_cost_5->setText(QCoreApplication::translate("Selector", "10", nullptr));
        lbl_q_5->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_9->setText(QCoreApplication::translate("Selector", "\320\233\321\203\320\272", nullptr));
        lbl_cost_9->setText(QCoreApplication::translate("Selector", "15", nullptr));
        lbl_q_9->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_7->setText(QCoreApplication::translate("Selector", "\320\221\320\260\320\272\320\273\320\260\320\266\320\260\320\275\321\213", nullptr));
        lbl_cost_7->setText(QCoreApplication::translate("Selector", "150", nullptr));
        lbl_q_7->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_8->setText(QCoreApplication::translate("Selector", "\320\234\320\260\320\275\320\263\320\276", nullptr));
        lbl_cost_8->setText(QCoreApplication::translate("Selector", "400", nullptr));
        lbl_q_8->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_12->setText(QCoreApplication::translate("Selector", "\320\221\320\260\320\275\320\260\320\275\321\213", nullptr));
        lbl_cost_12->setText(QCoreApplication::translate("Selector", "90", nullptr));
        lbl_q_12->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_10->setText(QCoreApplication::translate("Selector", "\320\222\320\276\320\264\320\260", nullptr));
        lbl_cost_10->setText(QCoreApplication::translate("Selector", "45", nullptr));
        lbl_q_10->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_11->setText(QCoreApplication::translate("Selector", "\320\236\320\263\321\203\321\200\321\206\321\213", nullptr));
        lbl_cost_11->setText(QCoreApplication::translate("Selector", "135", nullptr));
        lbl_q_11->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_15->setText(QCoreApplication::translate("Selector", "\320\240\320\265\320\264\320\270\321\201", nullptr));
        lbl_cost_15->setText(QCoreApplication::translate("Selector", "80", nullptr));
        lbl_q_15->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_13->setText(QCoreApplication::translate("Selector", "\320\234\320\260\320\275\320\264\320\260\321\200\320\270\320\275\321\213", nullptr));
        lbl_cost_13->setText(QCoreApplication::translate("Selector", "100", nullptr));
        lbl_q_13->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_14->setText(QCoreApplication::translate("Selector", "\320\232\320\276\321\204\320\265", nullptr));
        lbl_cost_14->setText(QCoreApplication::translate("Selector", "800", nullptr));
        lbl_q_14->setText(QCoreApplication::translate("Selector", "0", nullptr));
        btn_clear->setText(QCoreApplication::translate("Selector", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        btn_cart->setText(QCoreApplication::translate("Selector", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        btn_exit->setText(QCoreApplication::translate("Selector", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selector: public Ui_Selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTOR_H
