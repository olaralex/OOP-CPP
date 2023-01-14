#include "Bilet.h"
#include "Scanner.h"

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Bilet b1(true, 120);
    cout << b1.isValid() << endl;
    cout << b1.getTimp() << endl;
    Scanner s1();
    s1.scanBilet(b1);
    return 0;
}
