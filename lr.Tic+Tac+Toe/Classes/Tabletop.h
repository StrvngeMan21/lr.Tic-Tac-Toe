#pragma once
#include "stdafx.h"

class Tabletop
{
private:
	const short m_xSize = 3;
	const short m_ySize = 3;



	class Impl;
	std::unique_ptr<Impl> d_;
public:
	Tabletop();
	~Tabletop();

	static short getXsize();
	static short getYsize();


};