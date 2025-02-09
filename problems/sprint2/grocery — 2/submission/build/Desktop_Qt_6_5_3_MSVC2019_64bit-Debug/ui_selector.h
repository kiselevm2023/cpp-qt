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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_Selector
{
public:
    QWidget *centralWidget;
    QPushButton *btn_exit;
    QPushButton *btn_cart;
    QPushButton *btn_clear;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_8;
    ClickableLabel *lbl_item_6;
    QLabel *lbl_cost_6;
    QLabel *lbl_q_6;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    ClickableLabel *lbl_item_1;
    QLabel *lbl_cost_1;
    QLabel *lbl_q_1;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    ClickableLabel *lbl_item_2;
    QLabel *lbl_cost_2;
    QLabel *lbl_q_2;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_16;
    ClickableLabel *lbl_item_14;
    QLabel *lbl_cost_14;
    QLabel *lbl_q_14;
    QWidget *layoutWidget_15;
    QHBoxLayout *horizontalLayout_11;
    ClickableLabel *lbl_item_9;
    QLabel *lbl_cost_9;
    QLabel *lbl_q_9;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_12;
    ClickableLabel *lbl_item_10;
    QLabel *lbl_cost_10;
    QLabel *lbl_q_10;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_13;
    ClickableLabel *lbl_item_11;
    QLabel *lbl_cost_11;
    QLabel *lbl_q_11;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_10;
    ClickableLabel *lbl_item_8;
    QLabel *lbl_cost_8;
    QLabel *lbl_q_8;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_14;
    ClickableLabel *lbl_item_12;
    QLabel *lbl_cost_12;
    QLabel *lbl_q_12;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_17;
    ClickableLabel *lbl_item_15;
    QLabel *lbl_cost_15;
    QLabel *lbl_q_15;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_15;
    ClickableLabel *lbl_item_13;
    QLabel *lbl_cost_13;
    QLabel *lbl_q_13;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_9;
    ClickableLabel *lbl_item_7;
    QLabel *lbl_cost_7;
    QLabel *lbl_q_7;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    ClickableLabel *lbl_item_4;
    QLabel *lbl_cost_4;
    QLabel *lbl_q_4;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_5;
    ClickableLabel *lbl_item_3;
    QLabel *lbl_cost_3;
    QLabel *lbl_q_3;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    ClickableLabel *lbl_item_5;
    QLabel *lbl_cost_5;
    QLabel *lbl_q_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pb_fruit;
    QPushButton *pb_vegetable;
    QPushButton *pb_drink;

    void setupUi(QMainWindow *Selector)
    {
        if (Selector->objectName().isEmpty())
            Selector->setObjectName("Selector");
        Selector->resize(755, 424);
        centralWidget = new QWidget(Selector);
        centralWidget->setObjectName("centralWidget");
        btn_exit = new QPushButton(centralWidget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(231, 370, 70, 32));
        btn_cart = new QPushButton(centralWidget);
        btn_cart->setObjectName("btn_cart");
        btn_cart->setGeometry(QRect(134, 370, 83, 32));
        btn_clear = new QPushButton(centralWidget);
        btn_clear->setObjectName("btn_clear");
        btn_clear->setGeometry(QRect(30, 370, 90, 32));
        layoutWidget_11 = new QWidget(centralWidget);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(140, 60, 59, 18));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lbl_item_6 = new ClickableLabel(layoutWidget_11);
        lbl_item_6->setObjectName("lbl_item_6");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_item_6->sizePolicy().hasHeightForWidth());
        lbl_item_6->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lbl_item_6);

        lbl_cost_6 = new QLabel(layoutWidget_11);
        lbl_cost_6->setObjectName("lbl_cost_6");

        horizontalLayout_8->addWidget(lbl_cost_6);

        lbl_q_6 = new QLabel(layoutWidget_11);
        lbl_q_6->setObjectName("lbl_q_6");
        sizePolicy.setHeightForWidth(lbl_q_6->sizePolicy().hasHeightForWidth());
        lbl_q_6->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lbl_q_6);

        horizontalLayout_8->setStretch(0, 3);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 1);
        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(140, 30, 79, 18));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbl_item_1 = new ClickableLabel(layoutWidget_3);
        lbl_item_1->setObjectName("lbl_item_1");
        sizePolicy.setHeightForWidth(lbl_item_1->sizePolicy().hasHeightForWidth());
        lbl_item_1->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(lbl_item_1);

        lbl_cost_1 = new QLabel(layoutWidget_3);
        lbl_cost_1->setObjectName("lbl_cost_1");

        horizontalLayout_3->addWidget(lbl_cost_1);

        lbl_q_1 = new QLabel(layoutWidget_3);
        lbl_q_1->setObjectName("lbl_q_1");
        sizePolicy.setHeightForWidth(lbl_q_1->sizePolicy().hasHeightForWidth());
        lbl_q_1->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(lbl_q_1);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(250, 30, 92, 18));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lbl_item_2 = new ClickableLabel(layoutWidget);
        lbl_item_2->setObjectName("lbl_item_2");
        sizePolicy.setHeightForWidth(lbl_item_2->sizePolicy().hasHeightForWidth());
        lbl_item_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lbl_item_2);

        lbl_cost_2 = new QLabel(layoutWidget);
        lbl_cost_2->setObjectName("lbl_cost_2");

        horizontalLayout_4->addWidget(lbl_cost_2);

        lbl_q_2 = new QLabel(layoutWidget);
        lbl_q_2->setObjectName("lbl_q_2");
        sizePolicy.setHeightForWidth(lbl_q_2->sizePolicy().hasHeightForWidth());
        lbl_q_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lbl_q_2);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);
        layoutWidget_12 = new QWidget(centralWidget);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(370, 150, 67, 18));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        lbl_item_14 = new ClickableLabel(layoutWidget_12);
        lbl_item_14->setObjectName("lbl_item_14");
        sizePolicy.setHeightForWidth(lbl_item_14->sizePolicy().hasHeightForWidth());
        lbl_item_14->setSizePolicy(sizePolicy);

        horizontalLayout_16->addWidget(lbl_item_14);

        lbl_cost_14 = new QLabel(layoutWidget_12);
        lbl_cost_14->setObjectName("lbl_cost_14");

        horizontalLayout_16->addWidget(lbl_cost_14);

        lbl_q_14 = new QLabel(layoutWidget_12);
        lbl_q_14->setObjectName("lbl_q_14");
        sizePolicy.setHeightForWidth(lbl_q_14->sizePolicy().hasHeightForWidth());
        lbl_q_14->setSizePolicy(sizePolicy);

        horizontalLayout_16->addWidget(lbl_q_14);

        horizontalLayout_16->setStretch(0, 3);
        horizontalLayout_16->setStretch(1, 1);
        horizontalLayout_16->setStretch(2, 1);
        layoutWidget_15 = new QWidget(centralWidget);
        layoutWidget_15->setObjectName("layoutWidget_15");
        layoutWidget_15->setGeometry(QRect(140, 90, 52, 18));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_15);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        lbl_item_9 = new ClickableLabel(layoutWidget_15);
        lbl_item_9->setObjectName("lbl_item_9");
        sizePolicy.setHeightForWidth(lbl_item_9->sizePolicy().hasHeightForWidth());
        lbl_item_9->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(lbl_item_9);

        lbl_cost_9 = new QLabel(layoutWidget_15);
        lbl_cost_9->setObjectName("lbl_cost_9");

        horizontalLayout_11->addWidget(lbl_cost_9);

        lbl_q_9 = new QLabel(layoutWidget_15);
        lbl_q_9->setObjectName("lbl_q_9");
        sizePolicy.setHeightForWidth(lbl_q_9->sizePolicy().hasHeightForWidth());
        lbl_q_9->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(lbl_q_9);

        horizontalLayout_11->setStretch(0, 3);
        horizontalLayout_11->setStretch(1, 1);
        horizontalLayout_11->setStretch(2, 1);
        layoutWidget_14 = new QWidget(centralWidget);
        layoutWidget_14->setObjectName("layoutWidget_14");
        layoutWidget_14->setGeometry(QRect(250, 120, 58, 18));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        lbl_item_10 = new ClickableLabel(layoutWidget_14);
        lbl_item_10->setObjectName("lbl_item_10");
        sizePolicy.setHeightForWidth(lbl_item_10->sizePolicy().hasHeightForWidth());
        lbl_item_10->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(lbl_item_10);

        lbl_cost_10 = new QLabel(layoutWidget_14);
        lbl_cost_10->setObjectName("lbl_cost_10");

        horizontalLayout_12->addWidget(lbl_cost_10);

        lbl_q_10 = new QLabel(layoutWidget_14);
        lbl_q_10->setObjectName("lbl_q_10");
        sizePolicy.setHeightForWidth(lbl_q_10->sizePolicy().hasHeightForWidth());
        lbl_q_10->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(lbl_q_10);

        horizontalLayout_12->setStretch(0, 3);
        horizontalLayout_12->setStretch(1, 1);
        horizontalLayout_12->setStretch(2, 1);
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(370, 120, 81, 18));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        lbl_item_11 = new ClickableLabel(layoutWidget_4);
        lbl_item_11->setObjectName("lbl_item_11");
        sizePolicy.setHeightForWidth(lbl_item_11->sizePolicy().hasHeightForWidth());
        lbl_item_11->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(lbl_item_11);

        lbl_cost_11 = new QLabel(layoutWidget_4);
        lbl_cost_11->setObjectName("lbl_cost_11");

        horizontalLayout_13->addWidget(lbl_cost_11);

        lbl_q_11 = new QLabel(layoutWidget_4);
        lbl_q_11->setObjectName("lbl_q_11");
        sizePolicy.setHeightForWidth(lbl_q_11->sizePolicy().hasHeightForWidth());
        lbl_q_11->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(lbl_q_11);

        horizontalLayout_13->setStretch(0, 3);
        horizontalLayout_13->setStretch(1, 1);
        horizontalLayout_13->setStretch(2, 1);
        layoutWidget_10 = new QWidget(centralWidget);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(370, 90, 74, 18));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        lbl_item_8 = new ClickableLabel(layoutWidget_10);
        lbl_item_8->setObjectName("lbl_item_8");
        sizePolicy.setHeightForWidth(lbl_item_8->sizePolicy().hasHeightForWidth());
        lbl_item_8->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(lbl_item_8);

        lbl_cost_8 = new QLabel(layoutWidget_10);
        lbl_cost_8->setObjectName("lbl_cost_8");

        horizontalLayout_10->addWidget(lbl_cost_8);

        lbl_q_8 = new QLabel(layoutWidget_10);
        lbl_q_8->setObjectName("lbl_q_8");
        sizePolicy.setHeightForWidth(lbl_q_8->sizePolicy().hasHeightForWidth());
        lbl_q_8->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(lbl_q_8);

        horizontalLayout_10->setStretch(0, 3);
        horizontalLayout_10->setStretch(2, 1);
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(140, 120, 74, 18));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        lbl_item_12 = new ClickableLabel(layoutWidget_2);
        lbl_item_12->setObjectName("lbl_item_12");
        sizePolicy.setHeightForWidth(lbl_item_12->sizePolicy().hasHeightForWidth());
        lbl_item_12->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(lbl_item_12);

        lbl_cost_12 = new QLabel(layoutWidget_2);
        lbl_cost_12->setObjectName("lbl_cost_12");

        horizontalLayout_14->addWidget(lbl_cost_12);

        lbl_q_12 = new QLabel(layoutWidget_2);
        lbl_q_12->setObjectName("lbl_q_12");
        sizePolicy.setHeightForWidth(lbl_q_12->sizePolicy().hasHeightForWidth());
        lbl_q_12->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(lbl_q_12);

        horizontalLayout_14->setStretch(0, 3);
        horizontalLayout_14->setStretch(1, 1);
        horizontalLayout_14->setStretch(2, 1);
        layoutWidget_6 = new QWidget(centralWidget);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(140, 150, 64, 18));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        lbl_item_15 = new ClickableLabel(layoutWidget_6);
        lbl_item_15->setObjectName("lbl_item_15");
        sizePolicy.setHeightForWidth(lbl_item_15->sizePolicy().hasHeightForWidth());
        lbl_item_15->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(lbl_item_15);

        lbl_cost_15 = new QLabel(layoutWidget_6);
        lbl_cost_15->setObjectName("lbl_cost_15");

        horizontalLayout_17->addWidget(lbl_cost_15);

        lbl_q_15 = new QLabel(layoutWidget_6);
        lbl_q_15->setObjectName("lbl_q_15");
        sizePolicy.setHeightForWidth(lbl_q_15->sizePolicy().hasHeightForWidth());
        lbl_q_15->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(lbl_q_15);

        horizontalLayout_17->setStretch(0, 3);
        horizontalLayout_17->setStretch(1, 1);
        horizontalLayout_17->setStretch(2, 1);
        layoutWidget_9 = new QWidget(centralWidget);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(250, 150, 104, 18));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        lbl_item_13 = new ClickableLabel(layoutWidget_9);
        lbl_item_13->setObjectName("lbl_item_13");
        sizePolicy.setHeightForWidth(lbl_item_13->sizePolicy().hasHeightForWidth());
        lbl_item_13->setSizePolicy(sizePolicy);

        horizontalLayout_15->addWidget(lbl_item_13);

        lbl_cost_13 = new QLabel(layoutWidget_9);
        lbl_cost_13->setObjectName("lbl_cost_13");

        horizontalLayout_15->addWidget(lbl_cost_13);

        lbl_q_13 = new QLabel(layoutWidget_9);
        lbl_q_13->setObjectName("lbl_q_13");
        sizePolicy.setHeightForWidth(lbl_q_13->sizePolicy().hasHeightForWidth());
        lbl_q_13->setSizePolicy(sizePolicy);

        horizontalLayout_15->addWidget(lbl_q_13);

        horizontalLayout_15->setStretch(1, 1);
        horizontalLayout_15->setStretch(2, 1);
        layoutWidget_8 = new QWidget(centralWidget);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(250, 90, 101, 18));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        lbl_item_7 = new ClickableLabel(layoutWidget_8);
        lbl_item_7->setObjectName("lbl_item_7");
        sizePolicy.setHeightForWidth(lbl_item_7->sizePolicy().hasHeightForWidth());
        lbl_item_7->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(lbl_item_7);

        lbl_cost_7 = new QLabel(layoutWidget_8);
        lbl_cost_7->setObjectName("lbl_cost_7");

        horizontalLayout_9->addWidget(lbl_cost_7);

        lbl_q_7 = new QLabel(layoutWidget_8);
        lbl_q_7->setObjectName("lbl_q_7");
        sizePolicy.setHeightForWidth(lbl_q_7->sizePolicy().hasHeightForWidth());
        lbl_q_7->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(lbl_q_7);

        horizontalLayout_9->setStretch(0, 3);
        horizontalLayout_9->setStretch(1, 1);
        horizontalLayout_9->setStretch(2, 1);
        layoutWidget_5 = new QWidget(centralWidget);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(250, 60, 86, 18));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lbl_item_4 = new ClickableLabel(layoutWidget_5);
        lbl_item_4->setObjectName("lbl_item_4");
        sizePolicy.setHeightForWidth(lbl_item_4->sizePolicy().hasHeightForWidth());
        lbl_item_4->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lbl_item_4);

        lbl_cost_4 = new QLabel(layoutWidget_5);
        lbl_cost_4->setObjectName("lbl_cost_4");

        horizontalLayout_6->addWidget(lbl_cost_4);

        lbl_q_4 = new QLabel(layoutWidget_5);
        lbl_q_4->setObjectName("lbl_q_4");
        sizePolicy.setHeightForWidth(lbl_q_4->sizePolicy().hasHeightForWidth());
        lbl_q_4->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lbl_q_4);

        horizontalLayout_6->setStretch(0, 3);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 1);
        layoutWidget_13 = new QWidget(centralWidget);
        layoutWidget_13->setObjectName("layoutWidget_13");
        layoutWidget_13->setGeometry(QRect(370, 30, 83, 18));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lbl_item_3 = new ClickableLabel(layoutWidget_13);
        lbl_item_3->setObjectName("lbl_item_3");
        sizePolicy.setHeightForWidth(lbl_item_3->sizePolicy().hasHeightForWidth());
        lbl_item_3->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lbl_item_3);

        lbl_cost_3 = new QLabel(layoutWidget_13);
        lbl_cost_3->setObjectName("lbl_cost_3");

        horizontalLayout_5->addWidget(lbl_cost_3);

        lbl_q_3 = new QLabel(layoutWidget_13);
        lbl_q_3->setObjectName("lbl_q_3");
        sizePolicy.setHeightForWidth(lbl_q_3->sizePolicy().hasHeightForWidth());
        lbl_q_3->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lbl_q_3);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);
        layoutWidget_7 = new QWidget(centralWidget);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(370, 60, 82, 18));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lbl_item_5 = new ClickableLabel(layoutWidget_7);
        lbl_item_5->setObjectName("lbl_item_5");
        sizePolicy.setHeightForWidth(lbl_item_5->sizePolicy().hasHeightForWidth());
        lbl_item_5->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lbl_item_5);

        lbl_cost_5 = new QLabel(layoutWidget_7);
        lbl_cost_5->setObjectName("lbl_cost_5");

        horizontalLayout_7->addWidget(lbl_cost_5);

        lbl_q_5 = new QLabel(layoutWidget_7);
        lbl_q_5->setObjectName("lbl_q_5");
        sizePolicy.setHeightForWidth(lbl_q_5->sizePolicy().hasHeightForWidth());
        lbl_q_5->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lbl_q_5);

        horizontalLayout_7->setStretch(0, 3);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 1);
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(14, 183, 77, 81));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
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

        Selector->setCentralWidget(centralWidget);

        retranslateUi(Selector);
        QObject::connect(btn_exit, &QPushButton::clicked, Selector, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Selector);
    } // setupUi

    void retranslateUi(QMainWindow *Selector)
    {
        Selector->setWindowTitle(QCoreApplication::translate("Selector", "\320\233\320\260\320\262\320\272\320\260", nullptr));
        btn_exit->setText(QCoreApplication::translate("Selector", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        btn_cart->setText(QCoreApplication::translate("Selector", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        btn_clear->setText(QCoreApplication::translate("Selector", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        lbl_item_6->setText(QCoreApplication::translate("Selector", "\320\247\320\260\320\271", nullptr));
        lbl_cost_6->setText(QCoreApplication::translate("Selector", "200", nullptr));
        lbl_q_6->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_1->setText(QCoreApplication::translate("Selector", "\320\257\320\261\320\273\320\276\320\272\320\270", nullptr));
        lbl_cost_1->setText(QCoreApplication::translate("Selector", "100", nullptr));
        lbl_q_1->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_2->setText(QCoreApplication::translate("Selector", "\320\232\320\260\321\200\321\202\320\276\321\204\320\265\320\273\321\214", nullptr));
        lbl_cost_2->setText(QCoreApplication::translate("Selector", "60", nullptr));
        lbl_q_2->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_14->setText(QCoreApplication::translate("Selector", "\320\232\320\276\321\204\320\265", nullptr));
        lbl_cost_14->setText(QCoreApplication::translate("Selector", "800", nullptr));
        lbl_q_14->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_9->setText(QCoreApplication::translate("Selector", "\320\233\321\203\320\272", nullptr));
        lbl_cost_9->setText(QCoreApplication::translate("Selector", "15", nullptr));
        lbl_q_9->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_10->setText(QCoreApplication::translate("Selector", "\320\222\320\276\320\264\320\260", nullptr));
        lbl_cost_10->setText(QCoreApplication::translate("Selector", "45", nullptr));
        lbl_q_10->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_11->setText(QCoreApplication::translate("Selector", "\320\236\320\263\321\203\321\200\321\206\321\213", nullptr));
        lbl_cost_11->setText(QCoreApplication::translate("Selector", "135", nullptr));
        lbl_q_11->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_8->setText(QCoreApplication::translate("Selector", "\320\234\320\260\320\275\320\263\320\276", nullptr));
        lbl_cost_8->setText(QCoreApplication::translate("Selector", "400", nullptr));
        lbl_q_8->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_12->setText(QCoreApplication::translate("Selector", "\320\221\320\260\320\275\320\260\320\275\321\213", nullptr));
        lbl_cost_12->setText(QCoreApplication::translate("Selector", "90", nullptr));
        lbl_q_12->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_15->setText(QCoreApplication::translate("Selector", "\320\240\320\265\320\264\320\270\321\201", nullptr));
        lbl_cost_15->setText(QCoreApplication::translate("Selector", "80", nullptr));
        lbl_q_15->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_13->setText(QCoreApplication::translate("Selector", "\320\234\320\260\320\275\320\264\320\260\321\200\320\270\320\275\321\213", nullptr));
        lbl_cost_13->setText(QCoreApplication::translate("Selector", "100", nullptr));
        lbl_q_13->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_7->setText(QCoreApplication::translate("Selector", "\320\221\320\260\320\272\320\273\320\260\320\266\320\260\320\275\321\213", nullptr));
        lbl_cost_7->setText(QCoreApplication::translate("Selector", "150", nullptr));
        lbl_q_7->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_4->setText(QCoreApplication::translate("Selector", "\320\237\320\265\321\200\321\201\320\270\320\272\320\270", nullptr));
        lbl_cost_4->setText(QCoreApplication::translate("Selector", "120", nullptr));
        lbl_q_4->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_3->setText(QCoreApplication::translate("Selector", "\320\234\320\276\320\273\320\276\320\272\320\276", nullptr));
        lbl_cost_3->setText(QCoreApplication::translate("Selector", "110", nullptr));
        lbl_q_3->setText(QCoreApplication::translate("Selector", "0", nullptr));
        lbl_item_5->setText(QCoreApplication::translate("Selector", "\320\234\320\276\321\200\320\272\320\276\320\262\321\214", nullptr));
        lbl_cost_5->setText(QCoreApplication::translate("Selector", "10", nullptr));
        lbl_q_5->setText(QCoreApplication::translate("Selector", "0", nullptr));
        label->setText(QCoreApplication::translate("Selector", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pb_fruit->setText(QCoreApplication::translate("Selector", "\320\244\321\200\321\203\320\272\321\202\321\213", nullptr));
        pb_vegetable->setText(QCoreApplication::translate("Selector", "\320\236\320\262\320\276\321\211\320\270", nullptr));
        pb_drink->setText(QCoreApplication::translate("Selector", "\320\235\320\260\320\277\320\270\321\202\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selector: public Ui_Selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTOR_H
