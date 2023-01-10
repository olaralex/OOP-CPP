#ifndef MASINA_H
#define MASINA_H


class masina
{
    public:
        masina();
        masina(int _pret, char* _marca);
        masina(int _pret, char* _marca, float _capacitateMotor);
        virtual ~masina();
        virtual char* afisare();
        void setPret(int _pret);
        int getPret();
    protected:
        float capacitateMotor;
        char* marca;
    private:
        int pret;
        char show[100]; //folosit pt. afisare
};

#endif // MASINA_H
