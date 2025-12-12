
QT += qml quick widgets
TEMPLATE = lib
CONFIG += plugin
HEADERS += Sensor1Plugin.hpp \
    TacticalPluginInterface.hpp
SOURCES += Sensor1Plugin.cpp
RESOURCES += sensor1.qrc
TARGET = Sensor1Plugin
DESTDIR = $$PWD/../../bin/Plugins
