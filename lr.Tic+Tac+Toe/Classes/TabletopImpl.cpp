#include "stdafx.h"
#include "Tabletop.h"

class Tabletop::Impl { };

Tabletop::Tabletop() : d_(std::make_unique<Impl>()) 
{
	Debug::printDebugMes<Tabletop>();
}

Tabletop::~Tabletop()
{
}
