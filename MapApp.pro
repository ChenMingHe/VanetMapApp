#-------------------------------------------------
#
# Project created by QtCreator 2013-05-26T12:27:37
#
#-------------------------------------------------

QT       += core gui network testlib script

TARGET = MapApp
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    pipe/MessageReceiver.cpp \
    pipe/MessageSender.cpp \
    message/LocationMessage.cpp \
    vehicleInfo/Location.cpp \
    vehicleInfo/SourceInfo.cpp \
    model/ListWidget.cpp \
    model/PushButton.cpp \
    model/GraphicsView.cpp \
    view/ConversationWindow.cpp \
    model/TextEdit.cpp \
    vehicleInfo/VehicleUser.cpp \
    interpreter/MessageInterpreter.cpp \
    util/VehicleUserManager.cpp \
    test/TestVehicleUserManager.cpp \
    test/TestMessageSender.cpp \
    test/TestMessageReceiver.cpp \
    interpreter/SelfLocationInterpred.cpp \
    test/TestSelfLocationInterpred.cpp \
    factory/Factory.cpp

HEADERS  += MainWindow.h \
    pipe/MessageReceiver.h \
    pipe/MessageSender.h \
    vehicleInfo/Location.h \
    vehicleInfo/TestResult.h \
    vehicleInfo/SourceInfo.h \
    message/LocationMessage.h \
    model/ListWidget.h \
    model/PushButton.h \
    model/GraphicsView.h \
    view/ConversationWindow.h \
    model/TextEdit.h \
    vehicleInfo/VehicleUser.h \
    interpreter/MessageInterpreter.h \
    interpreter/InterpreterInterface.h \
    message/MessageEnum.h \
    util/VehicleUserManager.h \
    interpreter/SelfLocationInterpred.h \
    factory/Factory.h

FORMS    += MainWindow.ui \
    view/ConversationWindow.ui
