/* vi: set sw=4 ts=4:
 *
 * Copyright (C) 2011 Christian Hohnstaedt.
 *
 * All rights reserved.
 */

#include <QtCore/QByteArray>
#include "Passwd.h"

void Passwd::cleanse()
{
	memset(data(), 0, size());
}

Passwd::~Passwd()
{
	Passwd::cleanse();
}
unsigned char *Passwd::constUchar() const
{
	return (unsigned char *)(size() ? constData() : "");
}
