/**************************************************************************
**
** Copyright (C) 2019 sss0921.
** Contact: sss09217313@163.com
**
** This file is part of IoAssistant.
**
**************************************************************************/

#pragma once

#include <QtCore/qglobal.h>

#if defined(IODEVICE_LIBRARY)
#define IODEVICE_EXPORT Q_DECL_EXPORT
#else
#define IODEVICE_EXPORT Q_DECL_IMPORT
#endif
