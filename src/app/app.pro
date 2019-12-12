TEMPLATE = app

include(../../projectcommon.pri)

TARGET = $$PROJECT_APP_TARGET
DESTDIR = $$PROJECT_BIN_PATH

QT += widgets

SOURCES += \
    main.cpp \
    mainwindow.cpp

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h
