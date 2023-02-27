#pragma once
#include "stdafx.h"
#include "Debug.h"
#include "Objects.h"

enum class eTurn
{
	O_TURN,
	X_TURN
};

class Tabletop : public Debug
{
	friend class Control;
	friend class Render;
private:
	static const short m_xSize = 3;
	static const short m_ySize = 3;
	short m_step = 0;

	static std::array<std::array<std::shared_ptr<Objects>, m_xSize>, m_xSize> m_table;

	static void getTurn();
	static void setObjRandomly();

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