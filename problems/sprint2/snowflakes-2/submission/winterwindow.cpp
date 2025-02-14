#include "winterwindow.h"
#include "ui_winterwindow.h"
#include <QColorDialog>
#include <QPaintEvent>

WinterWindow::WinterWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WinterWindow)
{
    ui->setupUi(this);

   /* ui->sld_factor->setValue(1);
    ui->spin_depth->setValue(1);
    connect(ui->sld_factor, &QSlider::valueChanged, this, QOverload<>::of(&WinterWindow::update));
    connect(ui->spin_depth, QOverload<int>::of(&QSpinBox::valueChanged), this, QOverload<>::of(&WinterWindow::update));
    connect(ui->sld_size, &QSlider::valueChanged, this, QOverload<>::of(&WinterWindow::update));
    connect(ui->sld_line, &QSlider::valueChanged, this, QOverload<>::of(&WinterWindow::update));
    connect(ui->sld_rotation, &QSlider::valueChanged, this, QOverload<>::of(&WinterWindow::update)); */



        ui->setupUi(this);
        connect(ui->sld_size, &QSlider::sliderMoved, this, &WinterWindow::on_sld);
        connect(ui->sld_line, &QSlider::sliderMoved, this, &WinterWindow::on_sld);
        connect(ui->sld_rotation, &QSlider::sliderMoved, this, &WinterWindow::on_sld);
        connect(ui->sld_factor, &QSlider::sliderMoved, this, &WinterWindow::on_sld);



}

WinterWindow::~WinterWindow()
{
    delete ui;
}

void WinterWindow::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);

    prac::QPainter painter(this);
    painter.setPen(Qt::black);
    double size = double(ui->sld_size->value());

    SnowFlakeParams flake_params{
        .center = {width() / 2., height() / 2.},
        .depth = ui->spin_depth->value(),  
        .scale_factor = ui->sld_factor->value() / double(ui->sld_factor->maximum()),    
        .color = color_,
        .size = size,
        .line_width = ui->sld_line->value() / 15.,
        .rotation = double(ui->sld_rotation->value())
    };

    // Создайте снежинку (объект класса SnowFlake) и нарисуйте её методом Draw.
    SnowFlake sf(flake_params);
    sf.Draw(painter);

    QRect rect(10, 10, width() - 20, height() - 20);
    QFont font("Verdana", 12);
    painter.setFont(font);
    painter.setPen(Qt::white);

    // Получите описание снежинки из метода GetDescription,
    // напечатайте этот текст в прямоугольнике rect.
   // auto des = sf.GetDescription();
    //painter.drawText(rect, 0, des);
        //painter.drawText(rect, Qt::AlignLeft |  Qt::AlignTop, snowflake.GetDescription());
    auto flake_description = sf.GetDescription();

    painter.drawText(rect,
                     Qt::AlignHCenter | Qt::AlignVCenter,
                     flake_description);
}

void WinterWindow::on_btn_color_clicked()
{
    QColorDialog dialog{color_};
    dialog.exec();
    color_ = dialog.selectedColor();
    update();
}

void WinterWindow::on_sld()
{
    repaint();
}


void WinterWindow::on_spin_depth_valueChanged(int arg1)
{
    repaint();
}

  
