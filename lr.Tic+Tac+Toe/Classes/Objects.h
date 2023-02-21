#pragma once
#include "stdafx.h"

class Objects
{
private:
	char m_objChar = '/';
	short m_x = 0;
	short m_y = 0;

	class Impl;
	std::unique_ptr<Impl> d_;
public:
	Objects();
	Objects(short x, short y);
	virtual ~Objects();

	short getPosX();
	short getPosY();
	char getObjChar();
};

