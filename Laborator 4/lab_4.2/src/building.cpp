#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "building.h"

using namespace std;

building::building()
{
    //ctor
}

building::~building()
{
    //dtor
}
building::building( char *nume, int n_room, int n_floor, int n_l_room, int n_L_room)
{
    this->name_building=nume;
    this->n_room=n_room;
    this->n_floor=n_floor;
    this->n_l_room=n_l_room;
    this->n_L_room=n_L_room;
}
void building::showdata()
{
    cout << "----------" << endl;
    cout << "Numele cladirii: " << name_building << endl;
    cout << "Nr. de camere: " << n_room << endl;
    cout << "Nr. de etaje: " << n_floor << endl;
    cout << "Latimea 'l' a unei camere: " << n_l_room << endl;
    cout << "Lungimea 'L' a unei camere: " << n_L_room << endl;
    cout << "Suprafata camera: " << n_l_room * n_L_room << endl;
    cout << "Suprafata etaj: " << n_l_room * n_L_room * n_room << endl;
    cout << "----------" << endl;
}
building::building(char *date)
{
    int i=0;
    file.open(date, ios::in);
    //file.open("fisier.txt", ios::in);
    char linie[50];
    while(!file.eof())
    {
        file.getline(linie,50);
        cout << "---------------" << endl;
        cout<< "Linia " << i+1 << " este: " <<linie<<endl;
        cout << "---------------" << endl;
        i++;
    }

}
void building::set_n_room(int n_room)
{
    this->n_room=n_room;
}
int building::get_n_room()
{
    return n_room;
}
void building::set_no_floor(int no_floor)
{
    this->n_floor=no_floor;
}
int building::get_no_floor()
{
    return n_floor;
}
void building::set_n_l_room(int n_l_room)
{
    this->n_l_room=n_l_room;
}
int building::get_n_l_room()
{
    return n_l_room;
}
void building::set_n_L_room(int n_L_room)
{
    this->n_L_room=n_L_room;
}
int building::get_n_L_room()
{
    return n_L_room;
}
void building::set_name_building(char * name_building)
{
    this->name_building=name_building;
}
char* building::get_name_building_room()
{
    return name_building;
}
int building::room_mp()
{
    return n_l_room * n_L_room;
}
int building::floor_mp()
{
    return n_l_room * n_L_room * n_room;
}
int building::mp_rooms(int no_rooms)
{
    return n_l_room * n_L_room * n_room * no_rooms;
}
int building::building_mp()
{
    return n_l_room * n_L_room * n_room * n_floor;
}
