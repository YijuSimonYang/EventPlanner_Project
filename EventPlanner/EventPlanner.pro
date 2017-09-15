#-------------------------------------------------
#
# Project created by QtCreator 2017-09-06T18:12:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EventPlanner
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        eventplanner.cpp \
    eventadminmode.cpp \
    addingmode.cpp \
    event.cpp \
    session.cpp \
    timeslot.cpp \
    loginpage.cpp \
    loginpage.cpp

HEADERS += \
        eventplanner.h \
    eventadminmode.h \
    addingmode.h \
    event.h \
    session.h \
    timeslot.h \
    loginpage.h \
    loginpage.h

FORMS += \
    eventadminmode.ui \
    eventplanner.ui \
    addingmode.ui \
    loginpage.ui

RESOURCES += \
    picture.qrc \
