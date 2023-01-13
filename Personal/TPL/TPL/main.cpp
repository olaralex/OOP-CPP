#include "Persoana.h"

#include <iostream>

using namespace std;

int main()
{
    Persoana Alex(23,true);
    cout << Alex.getBalanata() << endl;
    Alex.cumparaBilet();
    cout << Alex.getBalanata() << endl;
    cout << Alex.getBilet() << endl;
    return 0;
}
