/**************************************************************************
**
** Copyright (C) 2019 sss0921.
** Contact: sss09217313@163.com
**
** This file is part of IoAssistant.
**
**************************************************************************/

#pragma once

#include "abstractioport.h"
#include "iodevice_global.h"

#include <QtPlugin>

class AbstractIoPort;

class IODEVICE_EXPORT IoPluginInterface
{
public:
    virtual ~IoPluginInterface();

    virtual QString key() const = 0;
    virtual AbstractIoPort *createPort() = 0;
};

#define IOPLUGININTERFACE_IID "apps.ioassistant.ioplugininterface/1.0"
Q_DECLARE_INTERFACE(IoPluginInterface, IOPLUGININTERFACE_IID)
