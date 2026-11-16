QT -= core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += sql widgets

CONFIG += c++20 console
CONFIG -= app_bundle

TEMPLATE        = app
TARGET          = Sandbox

SOURCES += \
    main.cpp
