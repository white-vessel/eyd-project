QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addjob.cpp \
    addpost.cpp \
    code.cpp \
    comments.cpp \
    companyconfirmprofile.cpp \
    companysignup.cpp \
    confirmprofile.cpp \
    home.cpp \
    jobs_admin.cpp \
    jobs_karbar.cpp \
    login.cpp \
    main.cpp \
    me.cpp \
    messeging.cpp \
    my_network_admin.cpp \
    my_networks_karbar.cpp \
    signup.cpp \
    viewprofile.cpp \
    welcome.cpp

HEADERS += \
    addjob.h \
    addpost.h \
    code.h \
    comments.h \
    companyconfirmprofile.h \
    companysignup.h \
    confirmprofile.h \
    home.h \
    jobs_admin.h \
    jobs_karbar.h \
    login.h \
    me.h \
    messeging.h \
    my_network_admin.h \
    my_networks_karbar.h \
    signup.h \
    viewprofile.h \
    welcome.h

FORMS += \
    addjob.ui \
    addpost.ui \
    code.ui \
    comments.ui \
    companyconfirmprofile.ui \
    companysignup.ui \
    confirmprofile.ui \
    home.ui \
    jobs_admin.ui \
    jobs_karbar.ui \
    login.ui \
    me.ui \
    messeging.ui \
    my_network_admin.ui \
    my_networks_karbar.ui \
    signup.ui \
    viewprofile.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    cinfirmprofile.qrc \
    code.qrc \
    hime.qrc \
    homePage.qrc \
    homePage1.qrc \
    login1.qrc \
    loginp.qrc \
    signup.qrc \
    signup1.qrc \
    welcome.qrc \
    welcome1.qrc
