#ifndef LOGIN2_H
#define LOGIN2_H

#include <QDockWidget>

namespace Ui {
class login2;
}

class login2 : public QDockWidget
{
    Q_OBJECT

public:
    explicit login2(QWidget *parent = 0);
    QString getUserName();
    QString getPassword();
    ~login2();

private slots:
    void on_loginClose_clicked();
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

    void on_loginButton_clicked();

private:
    Ui::login2 *ui;
    QPoint mouse_pos; // 添加这行来声明mouse_pos变量
    QPoint window_pos;
    QPoint diff_pos;
signals:
    //void sendLoginSuccess();
    void loginRequest();
};

#endif // LOGIN2_H
