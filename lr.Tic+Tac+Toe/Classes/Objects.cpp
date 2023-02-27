#include "stdafx.h"
#include "Objects.h"

const char* Objects::getClass() const
{
    return typeid(Objects).name();;
}
