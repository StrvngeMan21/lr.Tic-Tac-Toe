#pragma once
#include "Objects.h"

class ObjX :
    public Objects
{
private:
    char m_objChar = 'O';

    class Impl;
    std::unique_ptr<Impl> d_;
public:
    ObjX();
    ObjX(short x, short y);
    virtual ~ObjX();
};

