#pragma once
#include "stdafx.h"
#include "Debug.h"

enum class eControls
{
	UP		= VK_UP,
	DOWN	= VK_DOWN,
	LEFT	= VK_LEFT,
	RIGHT	= VK_RIGHT,
	RESTART	= 'r' | 'R' | 'Ê' | 'ê',
	EXIT	= 'e' | 'E' | 'ó' | 'Ó'
};

class Controls : public Debug
{
	friend class Tabletop;
private:
	class Impl;
	std::unique_ptr<Impl> d_;
public:
	Controls();
	~Controls();
};

