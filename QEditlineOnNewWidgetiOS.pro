#-------------------------------------------------
#
# Project created by QtCreator 2015-11-02T15:52:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QEditlineOnNewWidgetiOS
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    subview.cpp

HEADERS  += dialog.h \
    subview.h

FORMS    += dialog.ui \
    subview.ui

CONFIG += mobility
MOBILITY = 

