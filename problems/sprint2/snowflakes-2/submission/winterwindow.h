#ifndef WINTERWINDOW_H
#define WINTERWINDOW_H

#include <QMainWindow>
#include <prac/QPainter>
#include <cmath>

#include <QColorDialog>
#include <QPaintEvent>


QT_BEGIN_NAMESPACE
namespace Ui {
class WinterWindow;
}
QT_END_NAMESPACE

struct Vector2D {
    double x;
    double y;
};

struct Point2D {
    double x;
    double y;
};

inline Vector2D RotateVector(Vector2D src, double angle) {
    double a_rad = angle / 180. * M_PI;
    double sin_v = std::sin(a_rad);
    double cos_v = std::cos(a_rad);
    return Vector2D{
        src.x * cos_v + src.y * sin_v, - src.x * sin_v + src.y * cos_v
    };
}

inline Vector2D Add(Vector2D l, Vector2D r) {
    return Vector2D{l.x + r.x, l.y + r.y};
}

inline Point2D Add(Point2D l, Vector2D r) {
    return Point2D{l.x + r.x, l.y + r.y};
}

struct SnowFlakeParams {
    Point2D center;
    int depth;  // Г
    double scale_factor;  

    QColor color;
    double size;
    double line_width;
    double rotation;
};

class SnowFlake {
public:
    SnowFlake(SnowFlakeParams params) : params_(params) {

    }

/* void Draw(prac::QPainter& painter) const {
        QPen pen(params_.color, params_.line_width);
        painter.setPen(pen);

        for (int i = 0; i < 6; ++i) {
            double angle = params_.rotation + 60 * i;
            Point2D end = DrawRotatedVector(painter, params_.center, angle, params_.size, params_.depth));

            // Рекурсивный вызов для рисования следующей снежинки
                        if (params_.depth > 0) {

                            SnowFlake nextFlake = GetNextLevelFlake(end);
                nextFlake.Draw(painter);
                        }
        }
    }*/

    void Draw(QPainter& painter) const {
        QPen pen(QBrush(params_.color), params_.line_width);
        painter.setPen(pen);

        for (int i = 0; i < 6; ++i) {
            double angle = 60 * i + params_.rotation - 90;
            Point2D end = DrawRotatedVector(painter, params_.center, angle, params_.size);

            if (params_.depth > 0) {
                SnowFlake nextSnowflake = GetNextLevelFlake(end);
                nextSnowflake.Draw(painter);
            }
        }
    }






    QString GetDescription() const {
        return QString("Размер %1\nТолщина линии %2\nПоворот %3\nГлубина %4\nМножитель %5")
            .arg(params_.size)
            .arg(params_.line_width)
            .arg(params_.rotation)
            .arg(params_.depth)
            .arg(params_.scale_factor);
    }


private:
    static Point2D DrawRotatedVector(prac::QPainter& painter, Point2D center, double angle, double length) {
        Vector2D lay = RotateVector(Vector2D{length, 0}, angle);
        Point2D end = Add(center, lay);

        // Нарисуйте линию от точки center до точки end.
        // Используйте метод drawLine класса painter.
QLine line(center.x, center.y, lay.x, lay.y);
        painter.drawLine(QPointF(center.x, center.y), QPointF(end.x, end.y));

        return end;
    } 

     SnowFlake GetNextLevelFlake(Point2D new_center) const {
        return SnowFlakeParams{
            .center = new_center,
            .depth = params_.depth - 1,
            .scale_factor = params_.scale_factor,
            .color = params_.color,
            .size = params_.size * params_.scale_factor,
            .line_width = params_.line_width,
            .rotation = params_.rotation
        };
    }

private:
    SnowFlakeParams params_;



};

class WinterWindow : public QMainWindow
{
    Q_OBJECT

public:
    WinterWindow(QWidget *parent = nullptr);
    ~WinterWindow();

private slots:
    void on_btn_color_clicked();
    void on_sld();

    void on_spin_depth_valueChanged(int arg1);

private:
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::WinterWindow *ui;
    QColor color_ = Qt::white;
};
#endif // WINTERWINDOW_H
