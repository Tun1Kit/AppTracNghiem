QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AppTracNghiem
TEMPLATE = app

SOURCES += main.cpp \
           Hethong.cpp \
           Lophoc.cpp \
           TreeMonHoc.cpp \
           apptracnghiem.cpp \
           lop_gv.cpp

HEADERS += \
           Hethong.h \
           Lophoc.h \
           TreeMonHoc.h \
           apptracnghiem.h \
           lop_gv.h

FORMS += \
    apptracnghiem.ui \
    lop_gv.ui

RESOURCES += \
    extensions.qrc
