TEMPLATE = app
TARGET = lab8-1

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += main.cpp \
    window.cpp

HEADERS += \
    window.h

