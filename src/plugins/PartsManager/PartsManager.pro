QT       += core gui widgets

CONFIG += c++17

TEMPLATE = lib
TARGET = parts_manager
DESTDIR = ../../../plugin

INCLUDEPATH += ../../app/MainApp \

SOURCES += \
  parts_manager.cpp \
  plugin_impl.cpp

HEADERS += \
  parts_manager.h \
  plugin_impl.h

FORMS += \
    parts_manager.ui \

UI_DIR = ./tmp/ui
MOC_DIR = ./tmp/moc
RCC_DIR = ./tmp/rcc
