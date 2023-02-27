#pragma once
#include "stdafx.h"

enum class eControls
{
	UP		= VK_UP,
	DOWN	= VK_DOWN,
	LEFT	= VK_LEFT,
	RIGHT	= VK_RIGHT,
	RESTART	= 'r' | 'R' | 'Ê' | 'ê',
	EXIT	= 'e' | 'E' | 'ó' | 'Ó'
};

class Controls
{
	friend class Tabletop;
private:

	void sendDebugMes();

	class Impl;
	std::unique_ptr<Impl> d_;
public:
	Controls();
	~Controls();
};

