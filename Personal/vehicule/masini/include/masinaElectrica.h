#ifndef MASINAELECTRICA_H
#define MASINAELECTRICA_H

#include "masina.h"

class masinaElectrica : public masina
{
    public:
        masinaElectrica();
        masinaElectrica(int _pret, char* _marca, int _autonomie);
        virtual ~masinaElectrica();
        char* afisare();
    protected:

    private:
        int autonomie;
        char show[100]; //folosit pt. afisare
};

#endif // MASINAELECTRICA_H
