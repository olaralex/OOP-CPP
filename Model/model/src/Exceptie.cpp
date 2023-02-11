#include "Exceptie.h"

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

Exceptie::Exceptie()
{
    //ctor
}

Exceptie::~Exceptie()
{
    //dtor
}

Exceptie::Exceptie(char _catEx[], char _tipEx[])
{
    strcpy(catEx, _catEx );
    strcpy(tipEx, _tipEx );
}

void Exceptie::Print(void)
{
    cerr<<"Exceptie ["<<catEx<<"] - "<<tipEx<<endl;
}
