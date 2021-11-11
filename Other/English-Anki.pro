QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    info.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    info.h \
    mainwindow.h

FORMS += \
    info.ui \
    mainwindow.ui

VERSION = 1.2.1.1
QMAKE_TARGET_COMPANY = Konsilerinos C
QMAKE_TARGET_PRODUCT = Import tool for Anki
QMAKE_TARGET_DESCRIPTION = Import Tool
QMAKE_TARGET_COPYRIGHT = Konsilerinos

RC_ICONS = Resources/Icon/Icon.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Res.qrc
