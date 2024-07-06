#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login2.h"
#include "ui_login.h"
#include "stusql.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
     explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QPoint mouse_pos; // 添加这行来声明mouse_pos变量
    QPoint window_pos;
    QPoint diff_pos;


private slots:
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);




    void on_pushButton_clicked();
    void on_login_clicked();
    void on_close_clicked();
    void on_mihoyo_clicked();
    void on_mini_clicked();
};

#endif // MAINWINDOW_H
