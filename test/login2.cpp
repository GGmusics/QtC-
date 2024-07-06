#include "login2.h"
#include "ui_login2.h"
#include <QApplication>
#include <QWidget>
#include <QIcon>
#include <QStringList>
#include <QPixmap>
#include <QMovie>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMessageBox>
#include <QMouseEvent> // 显式包含QMouseEvent
#include <QDebug>
#include <QPalette>
#include <QSqlDatabase>

login2::login2(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::login2)
{
    ui->setupUi(this);
    ui->loginClose->setIcon(QIcon(":/QtImage/close.svg"));
    QLabel *logo = ui->logo;


    // 创建一个QPixmap对象，指定图标的新大小
    QPixmap pixmap = QPixmap(":/QtImage/mihoyo2.svg").scaled(200,60); // 设置图标大小为200x200像素

//    QPalette palette;
//    palette.setBrush(QPalette::Window,QBrush(pixmap));

    // 将调整大小的图标设置到QPushButton上
    logo->setPixmap(pixmap);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMaximizeButtonHint);

    QTextEdit *userName = ui->userName;
    userName->setPlaceholderText("请输入用户名");


    QTextEdit *passWord = ui->passWord;
    passWord->setPlaceholderText("请输入密码");


    qDebug() << QSqlDatabase::drivers();
    //    ("QSQLITE", "QMYSQL", "QMYSQL3", "QODBC", "QODBC3", "QPSQL", "QPSQL7")

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");
    //    qDebug() << db.open();
    if(db.open()){
       qDebug() <<  "数据库提示加载成功";
    }else{
       qDebug() << "数据库提示加载失败";
       }
    QPushButton *login=ui->loginButton;
    login->setStyleSheet("color:#debc60;background-color: rgb(51, 51, 53);border-radius:10px;border:1px;padding:1px 70px;");



}

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);

//    QWidget *w = new QWidget();
//    w->setFixedSize(300, 200);
//    w->setStyleSheet();

//    // 去除窗口标题栏和边框
//    w->setWindowFlags(Qt::FramelessWindowHint);

//    // 设置窗口透明度
//    w->setWindowOpacity(0.9);

//    w->show();

//    return a.exec();
//}




login2::~login2()
{
    delete ui;
}
void login2::mousePressEvent(QMouseEvent* event)
{
    mouse_pos = event->globalPos();//相对于桌面原点的位置
    window_pos = this->pos();//窗口左上角相对于桌面左上角
    diff_pos = mouse_pos - window_pos;//了鼠标位置与窗口位置之间的差异
}

void login2::mouseMoveEvent(QMouseEvent* event)
{
    QPoint pos = event->globalPos();
    //this->move(pos);
    this->move(pos - diff_pos);
}

void login2::on_loginClose_clicked()
{
      close();
}

void login2::on_loginButton_clicked()
{
    QString username = this->getUserName();

    //数据库查找用户名和密码
    if (this->getUserName().isEmpty() || this->getPassword().isEmpty()) {
        QMessageBox::critical(NULL, "警告", "账号密码不能为空，请重试。");
        return;
   }
    else{
        QSqlQuery query;
            query.prepare("SELECT * FROM user WHERE username = :username AND password = :password");
            query.bindValue(":username", username);
            query.bindValue(":password", password);

            if (query.exec()) {
                if (query.next()) {
                    // 用户名和密码正确
                    QMessageBox::information(this, "成功", "登录成功。");
                    // 在这里可以进行其他操作，比如隐藏登录窗口等
                } else {
                    // 用户名或密码错误
                    QMessageBox::critical(this, "失败", "用户名或密码错误，请重试。");
                }
            } else {
                QMessageBox::critical(this, "错误", "查询失败。");
            }
    }


}


QString login2::getUserName() {
    if (ui->userName->toPlainText().isEmpty()) {
        qDebug() << " username is empty ";


        return "";
    }
    return ui->userName->toPlainText();
}

QString login2::getPassword() {
    if (ui->passWord->toPlainText().isEmpty()) {
        qDebug() << " username is empty ";


        return "";
    }
    return ui->passWord->toPlainText();
}
