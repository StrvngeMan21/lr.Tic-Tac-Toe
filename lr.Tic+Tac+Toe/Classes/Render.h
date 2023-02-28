#pragma once
#include "stdafx.h"
#include "Tabletop.h"
#include "Controls.h"

static class Render
{
	friend class Tabletop;
	friend class Controls;
private:
	void selectEmpty();

	class Impl;
	std::unique_ptr<Impl> d_;
public:
	void printTabletop();

	Render();
	~Render();
};

