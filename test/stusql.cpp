#include "stusql.h"

#include <QMessageBox>
#include <QCoreApplication>
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlError>
#include <qmessagebox.h>
#include <QSet>
#include <QDebug>


stuSql * stuSql::ptrstuSql = nullptr;
stuSql::stuSql(QObject *parent)
    : QObject{parent}
{

}

bool stuSql::HandleLoginRequest(UserInfo user) {
    QString strSql = QString("select * from user WHERE username = '%1' AND password = '%2' ").
                             arg(user.username).arg(user.password);
    qDebug() << "exec : " << strSql;
    QSqlQuery sql(m_db);
    m_db.transaction();

    bool ret = sql.exec(strSql);


    QSqlError e = sql.lastError();
    if (e.isValid())
    {
        qDebug() << e.text();
        return false;
    }
    if (sql.next()) {
        qDebug() <<" no account ";
        m_db.commit();
        return true;
    }
    return false;

}

QString stuSql::getAuth(QString strUsername) {
    QSqlQuery sql(m_db);
    sql.exec(QString("select auth from user where username='%1'").arg(strUsername));
    UserInfo info;

    while (sql.next())
    {
        info.aut = sql.value(0).toString();
    }
    qDebug() << info.aut;
    return info.aut;
}

