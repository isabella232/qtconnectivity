/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i bluez5_helper_p.h -i QtCore/private/qglobal_p.h -p device1_bluez5_p.h:device1_bluez5.cpp org.bluez.Device1.xml
 *
 * qdbusxml2cpp is Copyright (C) 2022 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "device1_bluez5_p.h"

/*
 * Implementation of interface class OrgBluezDevice1Interface
 */

OrgBluezDevice1Interface::OrgBluezDevice1Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgBluezDevice1Interface::~OrgBluezDevice1Interface()
{
}


#include "moc_device1_bluez5_p.cpp"
