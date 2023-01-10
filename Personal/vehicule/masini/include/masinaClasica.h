#ifndef MASINACLASICA_H
#define MASINACLASICA_H

#include "masina.h"

class masinaClasica: public masina
{
    public:
        masinaClasica();
        masinaClasica(int _pret, char* _marca, float _capacitateMotor, int _an);
        virtual ~masinaClasica();
        virtual char* afisare();
    protected:

    private:
        int an;
        char show[100]; //folosit pt. afisare
};

#endif // MASINACLASICA_H
