#include "stdafx.h"
#include "ObjO.h"

class ObjO::Impl { };

ObjO::ObjO(short x, short y) : d_(std::make_unique<Impl>()), Objects::Objects(x, y)
{
	Debug::printDebugMes<ObjO>();
}

ObjO::ObjO() : ObjO::ObjO(0, 0)
{ }

ObjO::~ObjO()
{ }
