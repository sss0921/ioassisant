/**************************************************************************
**
** Copyright (C) 2019 sss0921.
** Contact: sss09217313@163.com
**
** This file is part of IoAssistant.
**
**************************************************************************/

#include "abstractioport.h"

AbstractIoPort::AbstractIoPort()
{
    m_portState = ClosedState;
}

AbstractIoPort::~AbstractIoPort()
{
}

AbstractIoPort::PortState AbstractIoPort::portState() const
{
    return m_portState;
}

bool AbstractIoPort::setPortState(PortState portState)
{

    if (m_portState == portState)
        return false;

    m_portState = portState;
    emit portStateChanged(portState);
    return true;
}

QString AbstractIoPort::errorString() const
{
    return m_errorString;
}

void AbstractIoPort::setErrorString(const QString &errorString)
{
    if (m_errorString == errorString)
        return;

    m_errorString = errorString;
    emit errorStringChanged(errorString);
}
