#include "stdafx.h"
#include "Render.h"

class Render::Impl { };

Render::Render() : d_(std::make_unique<Impl>()) { }
Render::~Render() { }

void Render::printTabletop()
{
	for (short jjj = 0; jjj < Tabletop::getYsize(); jjj++)
		for (short iii = 0; iii < Tabletop::getXsize(); iii++)
		{
			std::cout << Tabletop::m_table[jjj][iii]->getObjChar();
		}
}