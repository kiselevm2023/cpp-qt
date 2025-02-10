#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStringList>
#include <QDir>
#include <QPushButton>
#include <QMenu>
#include <QAction>
#include <prac/QTimer>
#include <prac/QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SetTimerInterval();

    void SetFolder(const QString& folder);  // Moved to public
    QString GetCurrentFile() const;         // Moved to public

private slots:
    void SetPixmap(const QString& path);
    void FitImage();
    void NextImage();
    void PrevImage();
    void UpdateEnabled();
    void ToggleStayOnTop();
    void SelectFolder();

    void StartTimer(int interval);
    void StopTimer();
    void slotCustomMenuRequested(QPoint pos);

private:
    void resizeEvent(QResizeEvent *event) override;
    QPixmap GetImageByPath(const QString& path) const;
    std::pair<QPixmap, int> FindNextImage(int start_index, int direction) const;

private:
    Ui::MainWindow *ui;
    QLabel lbl_img{this};
    QPixmap active_pixmap;
    QString current_folder_;
    int cur_file_index_ = 0;
    QStringList image_files_;
    prac::QTimer timer_;

    QAction *action_up_windows;
    QAction *action_use_resources;
    QAction *action_choose_dir;
    QAction *action_0sec;
    QAction *action_1sec;
    QAction *action_5sec;
    QAction *action_10sec;
    //QMenu *menu;
    //QMenu *menu_2;
};

#endif // MAINWINDOW_H
