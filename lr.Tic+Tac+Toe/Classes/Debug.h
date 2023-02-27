#pragma once
#include "stdafx.h"

class Debug
{
private:
	template <class T>
	const char* getClass() const;

public:
	template <class T>
	void printDebugMes();
};

template<class T>
inline const char* Debug::getClass() const
{
	const char* className = typeid(T&).name();
	return className;
}

template<class T>
void Debug::printDebugMes()
{
	std::cout << Debug::getClass<T>() << " Online!" << std::endl;
}
