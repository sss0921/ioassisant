TEMPLATE = app

include(../../ioassistant.pri)

TARGET = $$IOASSISTANT_APP_TARGET
DESTDIR = $$IOASSISTANT_BIN_PATH

QT += widgets

SOURCES += \
    main.cpp \
    mainwindow.cpp

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h
