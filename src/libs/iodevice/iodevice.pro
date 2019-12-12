QT += widgets

TARGET = iodevice

include(../projectlibary.pri)

HEADERS += \
    abstractioport.h \
    iodevice_global.h \
    ioplugininterface.h

SOURCES += \
    abstractioport.cpp
