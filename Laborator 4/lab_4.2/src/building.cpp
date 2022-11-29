#include "building.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
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
    name_buildinging = new char[strlen(nume)];
    strcpy(name_buildinging, nume);
    this->n_room = n_room;
    this->n_floor = n_floor;
    this->n_l_room = n_l_room;
    this->n_L_room = n_L_room;
}
void building::showdata()
{
    cout << name_buildinging << endl;
    cout << n_room << endl;
    cout << n_floor << endl;
    cout << n_l_room << endl;
    cout << n_L_room << endl;
}
building::building(char *date)
{
    char linie[50];
    fstream file;
    file.open(date,ios::in);
    file.getline(linie, 50);
    char *ptr = strtok(linie, " ");
    name_buildinging = new char(strlen(ptr));
    strcpy(name_buildinging, ptr);

    ptr = strtok(NULL, " ");
    this->n_room = atoi(ptr);

    ptr = strtok(NULL, " ");
    this->n_floor = atoi(ptr);

    ptr = strtok(NULL, " ");
    this->n_l_room = atoi(ptr);

    ptr = strtok(NULL, " ");
    this->n_L_room = atoi(ptr);
}
