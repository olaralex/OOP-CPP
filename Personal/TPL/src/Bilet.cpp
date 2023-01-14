#include "Bilet.h"

Bilet::Bilet()
{
    //ctor
}

Bilet::~Bilet()
{
    //dtor
}

Bilet::Bilet(bool _valabilitate, int _timp)
{
    valabilitate = _valabilitate;
    timp = _timp;
}

bool Bilet::isValid()
{
    return valabilitate;
}

int Bilet::getTimp()
{
    return timp;
}
