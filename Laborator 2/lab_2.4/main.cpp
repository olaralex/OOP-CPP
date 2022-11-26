#include <iostream>
#include "vector.h"
#include<vector>
#include<algorithm>
#include <conio.h>

using namespace std;

int main()
{
    Vector v;
    int opt;

    while(1)
    {
        system("cls");

        cout << "Variantele sunt:" << endl;
        cout << "1. Citre vector\n2. Afisare vector\n3. Nr. el. vector\n4. Sortare vector\n5. Inserare pe pozitie in vector\n6. Stergere el. din vector\n7. Stergere el. din vector de pe poz.\n8. Cauta el. in vector\n9. Ver. elem. vid in vector\n0. Iesire" << endl;

        cout << "Optinea ta este:";
        cin  >> opt;

        switch(opt)
        {
            case 1:
                v.citire_v();
                getch();
                break;
            case 2:
                v.afisare_v();
                getch();
                break;
            case 3:
                v.nr_el();
                getch();
                break;
            case 4:
                v.sortare_v();
                getch();
                break;
            case 5:
                v.inserare_v();
                getch();
                break;
            case 6:
                v.stergere_el();
                getch();
                break;
            case 7:
                v.stergere_poz();
                getch();
                break;
            case 8:
                v.cauta_v();
                getch();
                break;
            case 9:
                v.vid_v();
                getch();
                break;
            case 0:
            return true;
        }
    }
    return 0;
}
