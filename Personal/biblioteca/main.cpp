#include <iostream>

#include "carte.h"
#include "capitol.h"

using namespace std;

int main()
{
    capitol c("Introducere",17);
    capitol c1(c);
    cout << "C:" << c.toString() << endl;
    c.setNrPag(5);
    c.serTitlu("Sumar");
    cout << "C:" << c.toString() << endl;
    cout << "C1:" << c1.toString() << endl;
    capitol c2;
    cout << "C2:" << c2 << endl;
    //c2 = c1 + 5;
    //cout << "C2:" << c2 << endl;
    if(c == c1)
    {
        cout << "Merge ==" << endl;
    }
    if(c <= c1)
    {
        cout << "Merge <=" << endl;
    }
    if(c >= c1)
    {
        cout << "Merge >=" << endl;
    }
    return 0;
}
