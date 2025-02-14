#ifndef WINTERWINDOW_H
#define WINTERWINDOW_H

#include <QMainWindow>
#include <prac/QPainter>
#include <cmath>

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
    QColor color;
    double size;
    double line_width;
    double rotation;
    int depth;
    double scale_factor;
};

class SnowFlake {
public:
    SnowFlake(SnowFlakeParams params) : params_(params) {
    }

    void Draw(prac::QPainter& painter) const {
        // 1. Установите перо в painter. Нужно использовать цвет
        //    снежинки и толщину линии из переменной класса params_.
        QPen pen(QBrush(params_.color), params_.line_width);
        painter.setPen(pen);
        // 2. Разместите здесь код для рисования шести лучей на основе
        //    переменной params_ и метода DrawRotatedVector.
        //    Учтите центр снежинки – params_.center, начальный поворот
        //    params_.rotation.
        //    Углы получатся так:
        //    params_.rotation + 60 * 0
        //    params_.rotation + 60 * 1
        //    params_.rotation + 60 * 2
        //    ...
        //    params_.rotation + 60 * 5
        //    Вызывайте DrawRotatedVector в цикле.
        DrawFlake(painter);
    }
    void DrawFlake(prac::QPainter& painter) const {
        for(int i = 0; i<6; ++i)
        {
            Point2D new_center = DrawRotatedVector(painter, params_.center, i* 360/6 +params_.rotation, params_.size);
            if(params_.depth > 0)
            {
                SnowFlake nextSnowflake = GetNextLevelFlake(new_center);
                nextSnowflake.Draw(painter);
            }
        }
    }
    QString GetDescription() const {
        return QString("Размер %1\nТолщина линии %2\nПоворот %3\nМножитель %4")
            .arg(params_.size)
            .arg(params_.line_width)
            .arg(params_.rotation)
            .arg(params_.scale_factor);
    }
    SnowFlake GetNextLevelFlake(Point2D new_center) const {
        return SnowFlake(SnowFlakeParams{
            .center = new_center,
            .color = params_.color,
            .size = params_.size * params_.scale_factor,
            .line_width = params_.line_width,
            .rotation = params_.rotation,
            .depth = params_.depth - 1,
            .scale_factor = params_.scale_factor
        });
    }
private:

    static Point2D DrawRotatedVector(prac::QPainter& painter, Point2D center, double angle, double length) {
        Vector2D lay = RotateVector(Vector2D{length, 0}, angle);
        Point2D end = Add(center, lay);
        QPointF s1{center.x,center.y};
        QPointF s2{end.x,end.y};

        painter.drawLine(s1,s2);
        // Нарисуйте линию от точки center до точки end.
        // Используйте метод drawLine класса painter.

        return end;
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

private:
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::WinterWindow *ui;
    QColor color_ = Qt::white;
};
#endif // WINTERWINDOW_H
