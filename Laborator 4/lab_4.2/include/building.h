#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#ifndef BUILDING_H
#define BUILDING_H

using namespace std;

class building
{
public:
    building();
    building( char *nume, int n_room, int n_floor, int n_l_room, int n_L_room);/// n_room % n_floor=0
///daca nu respecta conditia, atunci se cere reintroducerea numarului de camere!
    building(building &b);
    building(char *date);
    void set_n_room(int n_room);
    int get_n_room();
    void set_no_floor(int no_floor);
    int get_no_floor();
    void set_n_l_room(int n_l_room);
    int get_n_l_room();
    void set_name_building(char * name_building);
    char* get_name_building_room();
    void set_n_L_room(int n_L_room);
    int get_n_L_room();
    int room_mp(); //suprata unei camere
    int floor_mp();
    int mp_rooms(int no_rooms);
    int building_mp();
    void write_to_file();///nume cladire, numar camere, numar etaje, suprafata per camera, suprafata per etaj
    void showdata();///nume cladire, numar camere, numar etaje, suprafata per camera, suprafata per etaj
    ~building();
private:
    int n_room;
    int n_floor;
    int n_l_room;
    int n_L_room;
    char *name_building;
    fstream file;
};

#endif // BUILDING_H
