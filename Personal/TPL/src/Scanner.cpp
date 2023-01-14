#include "Scanner.h"
#include "Bilet.h"

Scanner::Scanner()
{
    //ctor
}

Scanner::~Scanner()
{
    //dtor
}

void Scanner::scanBilet(Bilet B)
{
    scanValabil = isValid();
    scanTimp = getTimp();
    cout << scanValabil << endl;
    cout << scanTimp << endl;
}
