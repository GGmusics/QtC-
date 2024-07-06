#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login2.h"
#include "ui_login2.h"
#include <QIcon>
#include <QStringList>
#include <QPixmap>
#include <QMovie>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include <QMouseEvent> // 显式包含QMouseEvent
#include <QDebug>
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_ptrStuSql(NULL)
{

     ui->setupUi(this);

     ui->mihoyo->setIcon(QIcon(":/QtImage/appstore.svg"));
     ui->pushButton->setIcon(QIcon(":/QtImage/mihoyo.svg"));
     ui->up->setIcon(QIcon(":/QtImage/up.svg"));
     QPushButton *pushButton_3 = ui->close;
     QIcon icon(":/QtImage/close.svg");
     QPixmap pixmap = icon.pixmap(QSize(40, 40)); // 设置图标大小为20x20像素
     pushButton_3->setIcon(pixmap);

     ui->mini->setIcon(QIcon(":/QtImage/min.svg"));


//     connect(this->ui->treeWidget, &QTreeWidget::itemClicked, this,
//        &MainWindow::on_Item_Clicked);
//     //connect(this, loginFail, &m_dlgLogin, Page_logi);
//     connect(this->ui->treeWidget, &QTreeWidget::itemClicked, this, [&]{

//         });

     this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMaximizeButtonHint);

}



void MainWindow::mousePressEvent(QMouseEvent* event)
{
    mouse_pos = event->globalPos();//相对于桌面原点的位置
    window_pos = this->pos();//窗口左上角相对于桌面左上角
    diff_pos = mouse_pos - window_pos;//了鼠标位置与窗口位置之间的差异
}

void MainWindow::mouseMoveEvent(QMouseEvent* event)
{
    QPoint pos = event->globalPos();
    //this->move(pos);
    this->move(pos - diff_pos);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    login2 *configWindow = new login2;
    configWindow->show();
}

void MainWindow::on_close_clicked()
{
    close();
}



void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_mihoyo_clicked()
{

}

void MainWindow::on_mini_clicked()
{
    this->showMinimized();
}
