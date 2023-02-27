#include "stdafx.h"
#include "Objects.h"

class Objects::Impl { };

Objects::Objects() : d_(std::make_unique<Impl>())
{
	Debug::printDebugMes<Objects>();
}

Objects::Objects(short x, short y) : d_(std::make_unique<Impl>()),
	m_x{ x }, m_y{ y } 
	{ }

Objects::~Objects() 
	{ }
