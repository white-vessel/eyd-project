QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    code.cpp \
    confirmprofile.cpp \
    login.cpp \
    main.cpp \
    signup.cpp \
    welcome.cpp

HEADERS += \
    code.h \
    confirmprofile.h \
    login.h \
    signup.h \
    welcome.h

FORMS += \
    code.ui \
    confirmprofile.ui \
    login.ui \
    signup.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    cinfirmprofile.qrc \
    code.qrc \
    login1.qrc \
    loginp.qrc \
    signup.qrc \
    signup1.qrc \
    welcome.qrc \
    welcome1.qrc
