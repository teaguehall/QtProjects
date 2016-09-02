#-------------------------------------------------
#
# Project created by QtCreator 2016-08-21T21:49:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUIAudioSFML
TEMPLATE = app

DESTDIR = $$PWD/../bin/release

CONFIG += C++11


SOURCES += main.cpp\
        mainwindow.cpp \
    songmachine.cpp

HEADERS  += mainwindow.h \
    songmachine.h

FORMS    += mainwindow.ui

# Global definitions

# Libraries
win32: LIBS += -L$$PWD/../libraries/SFML-2.4.0/lib/ -lsfml-audio

INCLUDEPATH += $$PWD/../libraries/SFML-2.4.0/include
DEPENDPATH += $$PWD/../libraries/SFML-2.4.0/include
