#-------------------------------------------------
#
# Project created by QtCreator 2024-07-01T20:07:47
#
#-------------------------------------------------

QT       += core gui
QT += sql
CONFIG += console c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    login2.cpp \
    stusql.cpp


HEADERS  += mainwindow.h \
    login.h \
    login2.h \
    stusql.h

FORMS    += mainwindow.ui \
    login.ui \
    login2.ui

RESOURCES += \
    res.qrc
