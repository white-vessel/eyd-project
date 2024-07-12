QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    addjob.cpp \
    addpost.cpp \
    code.cpp \
    comment.cpp \
    commentui.cpp \
    company.cpp \
    companysignup.cpp \
    confirmcompany.cpp \
    confirmprofile.cpp \
    content.cpp \
    home.cpp \
    job.cpp \
    jobs_admin.cpp \
    jobs_karbar.cpp \
    like.cpp \
    login.cpp \
    main.cpp \
    me.cpp \
    mecompany.cpp \
    messeging.cpp \
    my_network_admin.cpp \
    my_networks_karbar.cpp \
    network.cpp \
    person.cpp \
    post.cpp \
    signup.cpp \
    time1.cpp \
    viewprofile.cpp \
    welcome.cpp

HEADERS += \
    account.h \
    addjob.h \
    addpost.h \
    code.h \
    comment.h \
    commentui.h \
    company.h \
    companysignup.h \
    confirmcompany.h \
    confirmprofile.h \
    content.h \
    home.h \
    job.h \
    jobs_admin.h \
    jobs_karbar.h \
    like.h \
    login.h \
    me.h \
    mecompany.h \
    messeging.h \
    my_network_admin.h \
    my_networks_karbar.h \
    network.h \
    person.h \
    post.h \
    signup.h \
    time1.h \
    viewprofile.h \
    welcome.h

FORMS += \
    addjob.ui \
    addpost.ui \
    code.ui \
    commentui.ui \
    companysignup.ui \
    confirmcompany.ui \
    confirmprofile.ui \
    home.ui \
    jobs_admin.ui \
    jobs_karbar.ui \
    login.ui \
    me.ui \
    mecompany.ui \
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
    back.qrc \
    cinfirmprofile.qrc \
    code.qrc \
    hime.qrc \
    homePage.qrc \
    homePage1.qrc \
    karbar.qrc \
    login1.qrc \
    loginp.qrc \
    signup.qrc \
    signup1.qrc \
    welcome.qrc \
    welcome1.qrc
