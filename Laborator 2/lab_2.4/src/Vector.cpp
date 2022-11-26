#include "vector.h"
#include <iostream>
#include<vector>
#include<algorithm>

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
    cout << "Nr. de elemente ale vectorului:";
    cin >> n;
    cout << "Elem. vect. sunt:" << endl;
    for(int i=0; i<n; i++)
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
    int aux;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (v[j]<v[i])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
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
    n ++;
    for(int i=n-1; i>=k; i--)
    {
        v[i+1] = v[i];
    }
    v[k] = el;
    cout << "Noul vector este:" << endl;
    afisare_v();
}
void Vector::stergere_el()
{
    int k, poz;
    bool gasit;
    gasit = false;
    cout << "El. pe care vrei sa il stergi din vector:";
    cin >> k;
    for(int i=0; i<n; i++)
    {
        if(v[i]==k)
        {
           gasit = true;
           poz = i;
        }
    }
    if(gasit == true)
    {
        for(int i = poz ; i < n - 1; i ++)
        {
            v[i] = v[i+1];
        }
        n--;
        cout << "Vectorul nou este:" << endl;
        afisare_v();
    }
    else
    {
        cout << "Elementul pe care il cauti nu se afla in vector!" << endl;
    }
}
void Vector::stergere_poz()
{
    int k;
    cout << "Pozitia de pe care vrei sa stergi un element:";
    cin >> k;
    for(int i=k ; i<n-1; i++)
    {
        v[i] = v[i+1];
    }
    n--;
    cout << "Vectorul nou este:" << endl;
    afisare_v();
}
void Vector::cauta_v()
{
    int cauta, poz;
    bool gasit;
    gasit = false;
    cout << "Elem. cautat:";
    cin >> cauta;
    for(int i=0;i<n;i++)
    {
        if(cauta == v[i])
        {
            gasit = true;
            poz = i;
        }
    }
    if(gasit == true)
        {
            cout << cauta << " a foat gasit, se afla pe pozitia " << poz << " din vector." << endl;
        }
        else
        {
            cout << "Elem. cautat nu se afla in vector." << endl;
        }
}
void Vector::vid_v()
{
    bool gasit;
    gasit = false;
    for(int i=0;i<n;i++)
    {
        if(v[i]==NULL)
        {
            gasit = true;
        }
    }
    if(gasit == true)
    {
        cout << "Vectorul are caractere vide!" << endl;
    }
    else
    {
        cout << "Vectorul nu are caractere vide!" << endl;
    }
}
