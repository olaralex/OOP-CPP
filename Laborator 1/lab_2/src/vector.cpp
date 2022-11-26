#include "vector.h"
#include <iostream>

using namespace std;

Vector::Vector()
{
    //ctor
}

Vector::~Vector()
{
    //dtor
}
void Vector::citire_v()
{
    cout << "Citirea vectorului" << endl;
    cout << "Nr. de elemente ale vectorului:";
    cin >> n;
    cout << "Elem. vect. sunt:" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
}
void Vector::afisare_v()
{
    for(int i=0; i<n; i++)
    {
        cout << "v[" << i << "] = " << v[i] << endl;
    }
}
void Vector::nr_el()
{
    cout << "Nr. elem. din vector este:" << n << endl;
}
void Vector::sortare_v()
{
    int temp,i;

    for(i=0; i <=n; i++)
    {
        if( v[i] > v[i+i] )
        {
            temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
    }
    cout << "Vectorul sortat este:" << endl;
    afisare_v();
}
void Vector::inserare_v()
{
    int k, el;
    cout << "Pe ce pozitie inserezi un nou element:";
    cin >> k;
    cout << "Valoarea elem.:";
    cin >> el;
    for(int i=0;i<=n;i++)
    {

    }

}
