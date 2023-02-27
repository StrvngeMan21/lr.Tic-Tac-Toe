#pragma once
#include "stdafx.h"

static class Render
{
	friend class Tabletop;
private:
	void printDebug();

	class Impl;
	std::unique_ptr<Impl> d_;
public:
	Render();
	~Render();
};

