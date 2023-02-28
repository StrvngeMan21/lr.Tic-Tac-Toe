#include "stdafx.h"
#include "Tabletop.h"

class Tabletop::Impl { };

Tabletop::Tabletop() : d_(std::make_unique<Impl>())
{
	Debug::printDebugMes<Tabletop>();
}

Tabletop::~Tabletop() { }


void Tabletop::eraseAndFillTable()
{
	for (short jjj = 0; jjj < m_table.size(); jjj++)
		for (short iii = 0; jjj < m_table[jjj].size(); iii++)
			m_table[jjj][iii] = std::make_unique<Objects>(jjj, iii);
}

void Tabletop::getTurn()
{

}

void Tabletop::setObjRandomly()
{

}


short Tabletop::getXsize() { return m_xSize; }
short Tabletop::getYsize() { return m_ySize; }

void Tabletop::playPlayer()
{
}

void Tabletop::playAI()
{
}

void Tabletop::checkWin()
{
}
