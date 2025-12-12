
#include "Sensor1Plugin.hpp"
#include "qqmlcontext.h"
#include <QQmlComponent>
#include <QDebug>

QString Sensor1Plugin::pluginName() const {
    return "Sensor1 Plugin";
}

QQuickItem* Sensor1Plugin::createPanel(QQmlEngine* engine)
{
    QQmlComponent component(engine, QUrl("qrc:/qml/Sensor1Panel.qml"));
    engine->rootContext()->setContextProperty("sensor1Plugin", this);
    QObject* obj = component.create();
    return qobject_cast<QQuickItem*>(obj);
}

void Sensor1Plugin::onDataReceived(const QByteArray& msg)
{
    qDebug() << "Sensor1Plugin received:" << msg;
}

void Sensor1Plugin::doSomething(const QString &msg) {
    qDebug() << "Sensor1Plugin:" << msg;
}
