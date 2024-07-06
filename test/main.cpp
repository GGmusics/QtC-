#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include "login.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        MainWindow w;

//        QWidget window;
//        window.resize(1602,901);
//        window.show();
        w.setWindowTitle("原神");
        w.setAutoFillBackground(true);



        w.resize(1602,901);

        w.show();

        return a.exec();
}


