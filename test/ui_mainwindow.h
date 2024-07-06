/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *login;
    QPushButton *up;
    QLabel *icon;
    QPushButton *mihoyo;
    QPushButton *pushButton;
    QPushButton *close;
    QPushButton *mini;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1602, 901);
        MainWindow->setMinimumSize(QSize(1602, 901));
        MainWindow->setBaseSize(QSize(1602, 901));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 0, 1518, 901));
        label->setStyleSheet(QStringLiteral("background-image: url(:/QtImage/loadBack.jpg);"));
        login = new QPushButton(centralWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(1280, 720, 281, 70));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        login->setFont(font);
        login->setCursor(QCursor(Qt::OpenHandCursor));
        login->setStyleSheet(QLatin1String("border-radius:35px;border:1px;padding:1px 70px;\n"
"background-color: rgb(255,219,41);\n"
"text-align : right;border-right-width : 70px;"));
        up = new QPushButton(centralWidget);
        up->setObjectName(QStringLiteral("up"));
        up->setGeometry(QRect(1320, 730, 50, 50));
        up->setStyleSheet(QStringLiteral("border-radius: 25px;background-color: rgb(33,36,41);"));
        icon = new QLabel(centralWidget);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(0, 0, 90, 898));
        icon->setStyleSheet(QStringLiteral("background-color: rgb(13, 13, 15);"));
        mihoyo = new QPushButton(centralWidget);
        mihoyo->setObjectName(QStringLiteral("mihoyo"));
        mihoyo->setGeometry(QRect(15, 750, 60, 60));
        mihoyo->setStyleSheet(QLatin1String("background-color: rgb(51, 51, 53);border-radius:10px;border:1px;padding:1px 70px;\n"
""));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(15, 20, 60, 60));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(51, 51, 53);border-radius:10px;border:1px;padding:1px 70px;\n"
""));
        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(1540, 10, 50, 50));
        close->setStyleSheet(QStringLiteral("background-color: transparent;border: none;"));
        mini = new QPushButton(centralWidget);
        mini->setObjectName(QStringLiteral("mini"));
        mini->setGeometry(QRect(1480, 15, 50, 50));
        mini->setStyleSheet(QStringLiteral("background-color: transparent;border: none;"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QString());
        login->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", 0));
        up->setText(QString());
        icon->setText(QString());
        mihoyo->setText(QString());
        pushButton->setText(QString());
        close->setText(QString());
        mini->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
