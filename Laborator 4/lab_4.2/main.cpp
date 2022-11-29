#include <iostream>
#include "building.h"

using namespace std;

int main()
{
    building b("nume_1",100,4,5,4);
    b.showdata();
    building c("date.txt");
    c.showdata();
    return 0;
}
