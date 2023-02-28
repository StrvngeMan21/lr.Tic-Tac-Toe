#pragma once
#include "stdafx.h"
#include "Debug.h"

class Objects : public Debug
{
private:
	char m_objChar = '/';
	short m_x = 0;
	short m_y = 0;
	bool m_selected = false;

	class Impl;
	std::unique_ptr<Impl> d_;
public:
	Objects();
	Objects(short x, short y);
	virtual ~Objects();

	short getPosX() const;
	short getPosY() const;
	char getObjChar() const;
	bool getSelection() const;

	virtual void setPosX(short x);
	virtual void setPosY(short y);
	virtual void setSelection(bool state);
};

