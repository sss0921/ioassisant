TEMPLATE = lib
include(../../projectcommon.pri)

DESTDIR = $$PROJECT_LIB_PATH
isEmpty(VERSION):VERSION = $$PROJECT_VERSION

DEFINES += LIB$$upper($$TARGET)_BUILD
TARGET = $$targetName($$TARGET)

win32{
    DLLDESTDIR = $$PROJECT_BIN_PATH
    QMAKE_DISTCLEAN += $$PROJECT_BIN_PATH/$${TARGET}.dll
    CONFIG += skip_target_version_ext
}
