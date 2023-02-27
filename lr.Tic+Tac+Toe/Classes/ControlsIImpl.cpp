#include "stdafx.h"
#include "Controls.h"

class Controls::Impl { };

Controls::Controls() : d_(std::make_unique<Impl>())
{
	Debug::printDebugMes<Controls>();
}