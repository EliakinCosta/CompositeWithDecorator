QT += core
QT -= gui

CONFIG += c++11

TARGET = CompositeWithDecorator
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    component.cpp \
    arroz.cpp \
    composite.cpp \
    decorator.cpp \
    logdecorator.cpp \
    twitterdecorator.cpp

HEADERS += \
    component.h \
    arroz.h \
    composite.h \
    decorator.h \
    logdecorator.h \
    twitterdecorator.h
