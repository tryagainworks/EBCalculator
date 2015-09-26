#-------------------------------------------------
#
# Project created by QtCreator 2015-04-13T13:51:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EBCalculator
TEMPLATE = app


SOURCES += main.cpp\
        dlgmain.cpp \
    clsactivityaccess.cpp \
    dlgglobalcalc.cpp \
    dlgmotorcalc.cpp \
    dlgsettings.cpp \
    clsebamtprocs.cpp \
    clssettingvarriables.cpp \
    clssettingsbase.cpp

HEADERS  += dlgmain.h \
    clsactivityaccess.h \
    dlgglobalcalc.h \
    dlgmotorcalc.h \
    dlgsettings.h \
    clsebamtprocs.h \
    clssettingvarriables.h \
    clssettingsbase.h

FORMS    += dlgmain.ui \
    dlgglobalcalc.ui \
    dlgmotorcalc.ui \
    dlgsettings.ui

CONFIG += mobility

MOBILITY = 

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

RESOURCES += \
    imgresource.qrc

