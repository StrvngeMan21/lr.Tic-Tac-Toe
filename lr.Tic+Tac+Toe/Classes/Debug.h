#pragma once
#include "stdafx.h"

class Debug
{
private:
	template <class T>
	std::string debugMes() override;
};

template<class T>
inline std::string Debug::debugMes()
{
	return (typeid(T).name() + "online!");
}
