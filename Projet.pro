QT       += core gui multimedia multimediawidgets\
    quick


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cour3.cpp \
    cours1.cpp \
    cours2.cpp \
    dialog.cpp \
    dialog1.cpp \
    dialog10.cpp \
    dialog11.cpp \
    dialog12.cpp \
    dialog13.cpp \
    dialog14.cpp \
    dialog15.cpp \
    dialog16.cpp \
    dialog17.cpp \
    dialog18.cpp \
    dialog19.cpp \
    dialog2.cpp \
    dialog20.cpp \
    dialog21.cpp \
    dialog22.cpp \
    dialog23.cpp \
    dialog24.cpp \
    dialog25.cpp \
    dialog26.cpp \
    dialog27.cpp \
    dialog28.cpp \
    dialog3.cpp \
    dialog4.cpp \
    dialog5.cpp \
    dialog6.cpp \
    dialog7.cpp \
    dialog8.cpp \
    dialog9.cpp \
    main.cpp \
    mainwindow1.cpp \
    mainwindow2.cpp \
    mainwindow3.cpp \
    mainwindow4.cpp \
    rutinas.cpp

HEADERS += \
    cour3.h \
    cours1.h \
    cours2.h \
    dialog.h \
    dialog1.h \
    dialog10.h \
    dialog11.h \
    dialog12.h \
    dialog13.h \
    dialog14.h \
    dialog15.h \
    dialog16.h \
    dialog17.h \
    dialog18.h \
    dialog19.h \
    dialog2.h \
    dialog20.h \
    dialog21.h \
    dialog22.h \
    dialog23.h \
    dialog24.h \
    dialog25.h \
    dialog26.h \
    dialog27.h \
    dialog28.h \
    dialog3.h \
    dialog4.h \
    dialog5.h \
    dialog6.h \
    dialog7.h \
    dialog8.h \
    dialog9.h \
    mainwindow1.h \
    mainwindow2.h \
    mainwindow3.h \
    mainwindow4.h

FORMS += \
    cour3.ui \
    cours1.ui \
    cours2.ui \
    dialog.ui \
    dialog1.ui \
    dialog10.ui \
    dialog11.ui \
    dialog12.ui \
    dialog13.ui \
    dialog14.ui \
    dialog15.ui \
    dialog16.ui \
    dialog17.ui \
    dialog18.ui \
    dialog19.ui \
    dialog2.ui \
    dialog20.ui \
    dialog21.ui \
    dialog22.ui \
    dialog23.ui \
    dialog24.ui \
    dialog25.ui \
    dialog26.ui \
    dialog27.ui \
    dialog28.ui \
    dialog3.ui \
    dialog4.ui \
    dialog5.ui \
    dialog6.ui \
    dialog7.ui \
    dialog8.ui \
    dialog9.ui \
    mainwindow1.ui \
    mainwindow2.ui \
    mainwindow3.ui \
    mainwindow4.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    im.qrc \
    im.qrc \
    imag.qrc \
    imag/imag.qrc \
    imag1.qrc \
    planetes.qrc \
    res.qrc \
    res.qrc \
    res.qrc \
    res.qrc \
    ressource.qrc \
    welcome.qrc \
    welcomee.qrc

SUBDIRS += \

DISTFILES +=
