#include "masina.h"
#include "masinaElectrica.h"
#include "masinaClasica.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    masina m(12000,"Mercedes-Benz",3.0);
    cout << m.afisare() << endl;
    masinaClasica mc(300000,"Aston Martin", 5.2, 1960);
    cout << mc.afisare() << endl;
    masinaElectrica me(50000,"Tesla",500);
    cout << me.afisare() << endl;
    return 0;
}
