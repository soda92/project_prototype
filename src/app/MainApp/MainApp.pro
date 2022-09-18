QT       += core gui widgets

CONFIG += c++17

TARGET = mainApp
DESTDIR = ../../../bin

SOURCES += \
    main.cpp \
    mainapp.cpp

HEADERS += \
    mainapp.h \
    plugin_interface.h

FORMS += \
    mainapp.ui

UI_DIR = ./tmp/ui
MOC_DIR = ./tmp/moc
RCC_DIR = ./tmp/rcc
