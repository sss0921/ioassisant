/**************************************************************************
**
** Copyright (C) 2019 sss0921.
** Contact: sss09217313@163.com
**
** This file is part of IoAssistant.
**
**************************************************************************/

#pragma once

#include <QObject>
#include <QSettings>

class AbstractIoPort : public QObject
{
    Q_OBJECT
public:
    enum PortState { ClosedState = 0, OpeningState = 1, OpenedState = 2 };

    AbstractIoPort();
    ~AbstractIoPort();

    virtual void open() = 0;
    virtual void close() = 0;

    virtual QByteArray read() const = 0;
    virtual void write(const QByteArray &byte) = 0;

    virtual void saveSettings(QSettings *settings) = 0;
    virtual void loadSettings(QSettings *settings) = 0;

    PortState portState() const;
    QString errorString() const;

signals:
    void portStateChanged(PortState portState);
    void errorStringChanged(const QString &errorString);

protected:
    bool setPortState(PortState portState);
    void setErrorString(const QString &errorString);

private:
    PortState m_portState;
    QString m_errorString;
};
