/********************************************************************************
** Form generated from reading UI file 'login2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN2_H
#define UI_LOGIN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login2
{
public:
    QWidget *loginPage;
    QPushButton *loginClose;
    QTextEdit *userName;
    QTextEdit *passWord;
    QPushButton *loginButton;
    QLabel *logo;

    void setupUi(QDockWidget *login2)
    {
        if (login2->objectName().isEmpty())
            login2->setObjectName(QStringLiteral("login2"));
        login2->resize(560, 460);
        login2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255);"));
        login2->setFloating(true);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        loginClose = new QPushButton(loginPage);
        loginClose->setObjectName(QStringLiteral("loginClose"));
        loginClose->setGeometry(QRect(510, 10, 40, 40));
        loginClose->setStyleSheet(QStringLiteral("background-color: transparent;border: none;"));
        userName = new QTextEdit(loginPage);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(120, 150, 320, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\346\226\207\351\273\221-85W"));
        font.setPointSize(12);
        userName->setFont(font);
        userName->setStyleSheet(QLatin1String("background-color: transparent;border-radius:10px;border: 2px solid #e3e1ef;text-align : left;border-left-width : 2px;padding-top : 7px\n"
""));
        passWord = new QTextEdit(loginPage);
        passWord->setObjectName(QStringLiteral("passWord"));
        passWord->setGeometry(QRect(120, 240, 320, 51));
        passWord->setFont(font);
        passWord->setStyleSheet(QLatin1String("background-color: transparent;border-radius:10px;border: 2px solid #e3e1ef;text-align : left;border-left-width : 2px;padding-top : 5px\n"
""));
        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(120, 320, 320, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\261\211\344\273\252\346\226\207\351\273\221-85W"));
        font1.setPointSize(16);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QLatin1String("background-color: rgb(51, 51, 53);border-radius:10px;border:1px;padding:1px 70px;\n"
""));
        logo = new QLabel(loginPage);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(180, 60, 241, 51));
        login2->setWidget(loginPage);

        retranslateUi(login2);

        QMetaObject::connectSlotsByName(login2);
    } // setupUi

    void retranslateUi(QDockWidget *login2)
    {
        login2->setWindowTitle(QApplication::translate("login2", "DockWidget", 0));
        loginClose->setText(QString());
        loginButton->setText(QApplication::translate("login2", "\347\231\273\345\275\225", 0));
        logo->setText(QApplication::translate("login2", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class login2: public Ui_login2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN2_H
