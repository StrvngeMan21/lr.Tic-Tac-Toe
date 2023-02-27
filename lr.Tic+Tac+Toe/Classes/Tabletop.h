#pragma once
#include "stdafx.h"

enum class eTurn
{
	O_TURN,
	X_TURN
};

class Tabletop
{
	friend class Control;
	friend class Render;
private:
	static const short m_xSize = 3;
	static const short m_ySize = 3;
	short m_step = 0;

	static void getTurn();
	static void setObjRandomly();

	void sendDebugMes();

	class Impl;
	std::unique_ptr<Impl> d_;
public:
	Tabletop();
	~Tabletop();

	static short getXsize();
	static short getYsize();

	static void playPlayer();
	static void playAI();
	static void checkWin();
};