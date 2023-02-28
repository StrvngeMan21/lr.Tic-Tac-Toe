#pragma once
#include "Objects.h"

class ObjO :
    public Objects
{
private:
    char m_objChar = 'O';

    class Impl;
    std::unique_ptr<Impl> d_;
public:
    ObjO();
    ObjO(short x, short y);
    virtual ~ObjO();
};

