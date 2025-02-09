#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QDir>
//#include <QTimer>
#include <utility>
#include <QString>
#include <prac/QTimer>
#include <prac/QFileDialog>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    struct Pix {
        QPixmap act_pix;
        int pix_index = 0;
    };

    void SetFolder(const QString& d);

    void FitImage();

    QPixmap GetImageByPath(QString path) const;

    std::pair<QPixmap, int> FindNextImage(int direction);

    QString GetCurrentFile();

    void GoAhead();

    void GoBack();
    prac::QTimer* GetTimer();

private slots:
    void slotCustomMenuRequested(QPoint pos);

    void slotSetWindowStayOnTopHint();

    void slotClose();

    void slotUseResources();

    void slotGetExistingDirectory();

    void slotSetTimerFor1Sec();

    void slotSetTimerFor5Sec();

    void slotSetTimerFor10Sec();

    void slotStopTimer();

    void on_btn_left_clicked();

    void on_btn_right_clicked();

private:

    void slotSetWindowFlags();

    QPixmap ResizeImgToFit(const QPixmap &src, int window_width, int window_height);

    void resizeEvent(QResizeEvent *event) override;

private:
    Ui::MainWindow *ui;
    Pix pix_;
    QLabel lbl_new_{this};
    const QString resources_path_ = ":/cats/images/";
    QDir dir_;
    QTimer timer_{this};
    int period_ = 0;
    bool state_ = false;
};
#endif
