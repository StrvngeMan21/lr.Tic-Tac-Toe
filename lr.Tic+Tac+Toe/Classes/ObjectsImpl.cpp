#include "stdafx.h"
#include "Objects.h"

class Objects::Impl { };

Objects::Objects(short x, short y) : d_(std::make_unique<Impl>()), 
	m_x{ x }, m_y{ y } 
{
	Debug::printDebugMes<Objects>();
}

Objects::Objects() : Objects::Objects(0, 0)	
	{ }

Objects::~Objects() 
	{ }


short Objects::getPosX() const { return m_x; }
short Objects::getPosY() const { return m_y; }
char Objects::getObjChar() const { return m_objChar; }
bool Objects::getSelection() const { return m_selected; }


void Objects::setPosX(short x) { m_x = x; }
void Objects::setPosY(short y) { m_y = y; }
void Objects::setSelection(bool state) { m_selected = state; }


