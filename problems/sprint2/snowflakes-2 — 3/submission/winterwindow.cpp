#include "winterwindow.h"
#include "ui_winterwindow.h"
#include <QColorDialog>
#include <QPaintEvent>

WinterWindow::WinterWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WinterWindow)
{
    ui->setupUi(this);
    //ui->sld_factor->setValue(60);
    //ui->spin_depth->setValue(1);

    connect(ui->sld_factor, &QSlider::valueChanged, this, QOverload<>::of(&WinterWindow::update));
    connect(ui->spin_depth, QOverload<int>::of(&QSpinBox::valueChanged), this, QOverload<>::of(&WinterWindow::update));
    connect(ui->sld_size, &QSlider::valueChanged, this, QOverload<>::of(&WinterWindow::update));
    connect(ui->sld_line, &QSlider::valueChanged, this, QOverload<>::of(&WinterWindow::update));
    connect(ui->sld_rotation, &QSlider::valueChanged, this, QOverload<>::of(&WinterWindow::update));
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
        .color = color_,
        .size = size,
        .line_width = ui->sld_line->value() / 15.,
        .rotation = double(ui->sld_rotation->value()),
        .depth = ui->spin_depth->value(),
        .scale_factor = ui->sld_factor->value() / double(ui->sld_factor->maximum())
    };
    SnowFlake snow_f{flake_params};
    // Создайте снежинку (объект класса SnowFlake) и нарисуйте её методом Draw.
    snow_f.Draw(painter);
    QRect rect(10, 10, width() - 20, height() - 20);

    QFont font("Verdana", 12);
    painter.setFont(font);
    painter.setPen(Qt::white);
    painter.drawText(rect,
                     //Qt::AlignHCenter | Qt::AlignVCenter,
                     Qt::AlignLeft | Qt::AlignTop,
                     snow_f.GetDescription());
    // Получите описание снежинки из метода GetDescription,
    // напечатайте этот текст в прямоугольнике rect.
}

void WinterWindow::on_btn_color_clicked()
{
    QColorDialog dialog{color_};
    dialog.exec();
    color_ = dialog.selectedColor();
    update();
}
