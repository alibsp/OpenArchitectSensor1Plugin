
#pragma once
#include "TacticalPluginInterface.hpp"
#include <QObject>

class Sensor1Plugin : public QObject, public TacticalPluginInterface {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID TacticalPluginInterface_iid)
    Q_INTERFACES(TacticalPluginInterface)

public:
    QString pluginName() const override;
    QQuickItem* createPanel(QQmlEngine* engine) override;
    void onDataReceived(const QByteArray& msg) override;
public slots:
    void doSomething(const QString& msg);
};
