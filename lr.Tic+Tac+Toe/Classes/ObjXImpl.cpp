#include "stdafx.h"
#include "ObjX.h"

class ObjX::Impl { };

ObjX::ObjX(short x, short y) : d_(std::make_unique<Impl>()), Objects::Objects(x, y)
{
	Debug::printDebugMes<ObjX>();
}

ObjX::ObjX() : ObjX::ObjX(0, 0)
{ }

ObjX::~ObjX()
{ }