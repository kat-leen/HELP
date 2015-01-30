CONFIG += console
SOURCES += main.c
TARGET = main
INCLUDEPATH += C:\APPLIS\OpenCV2.4.2\include
LIBS = -LC:\APPLIS\OpenCV2.4.2\x86\vc9\lib
build_pass:CONFIG(debug, debug|release)
{
LIBS += -lopencv_core242d -lopencv_highgui242d -lopencv_imgproc242d
}

HEADERS +=
