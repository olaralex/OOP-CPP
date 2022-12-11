#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "building.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    building b( "3A Corporation", 12, 5, 4, 7);
    b.showdata();
    building b_1("fisier.txt");
    b.set_n_room(100);
    b.showdata();
    cout << "---------------" << endl;
    cout << "Nr. de camre sunt: " << b.get_n_room() << endl;
    cout << "---------------" << endl;
    b.set_no_floor(100);
    b.showdata();
    cout << "---------------" << endl;
    cout << "Nr. de etaje sunt: " << b.get_no_floor() << endl;
    cout << "---------------" << endl;
    b.set_n_l_room(100);
    b.showdata();
    cout << "---------------" << endl;
    cout << "Latimea camerei este: " << b.get_n_l_room() << endl;
    cout << "---------------" << endl;
    b.set_n_L_room(100);
    b.showdata();
    cout << "---------------" << endl;
    cout << "Latimea camerei este: " << b.get_n_L_room() << endl;
    cout << "---------------" << endl;
    b.set_name_building("Alex");
    b.showdata();
    cout << "---------------" << endl;
    cout << "Numele cladirii este: " << b.get_name_building_room() << endl;
    cout << "---------------" << endl;

    cout << "---------------" << endl;
    cout << "Aria unei camere este: " << b.room_mp() << endl;
    cout << "---------------" << endl;

    cout << "---------------" << endl;
    cout << "Aria unui etaj este: " << b.floor_mp() << endl;
    cout << "---------------" << endl;

    cout << "---------------" << endl;
    cout << "Aria a un nr de camere este: " << b.mp_rooms(3) << endl;
    cout << "---------------" << endl;

    cout << "---------------" << endl;
    cout << "Aria cladirii este: " << b.building_mp() << endl;
    cout << "---------------" << endl;
    return 0;
}
