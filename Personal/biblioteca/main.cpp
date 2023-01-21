#include <iostream>

#include "carte.h"
#include "capitol.h"

using namespace std;

int main()
{
    cout << "CAPITOL" << endl;
    capitol c("Introducere",17);
    capitol c1(c);
    cout << "\nc:" << c.toString() << endl;
    c.setNrPag(5);
    c.serTitlu("Sumar");
    cout << "\nc:" << c.toString() << endl;
    cout << "\nc1:" << c1.toString() << endl;
    capitol c2;
    cout << "\nc2:" << c2 << endl;
    //c2 = c1 + 5;
    //cout << "C2:" << c2 << endl;
    if(c == c1)
    {
        cout << "\nMerge == pt. capitol" << endl;
    }
    if(c <= c1)
    {
        cout << "\nMerge <= pt. capitol" << endl;
    }
    if(c >= c1)
    {
        cout << "\nMerge >= pt. capitol" << endl;
    }
    cout << "--------------------" << endl;
    carte C("Atomic Habits", 271, 50, "Dezvoltare Personala");
    carte C1(C);
    cout << "\nC: " << C.toString() << endl;
    C.serTitlu("100 de greseli care au schimbat istoria");
    C.setCategorie("Istorie");
    cout << "\nC: " << C.toString() << endl;
    cout << "\nC1: " << C1.toString() << endl;
    carte C2;
    cout << "\nC2: " << C2 << endl;
    //C2 = C1 + 100;
    //cout << "'nC2: " << C2 << endl;
    if(C == C1)
    {
        cout << "\nMerge == pt. carte" << endl;
    }
    if(C <= C1)
    {
        cout << "\nMerge <= pt. carte" << endl;
    }
    if(C >= C1)
    {
        cout << "\nMerge >= pt. carte" << endl;
    }
    cout << "--------------------" << endl;
    return 0;
}
