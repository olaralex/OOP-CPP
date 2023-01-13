#ifndef PERSOANA_H
#define PERSOANA_H


class Persoana
{
    public:
        Persoana();
        virtual ~Persoana();
        Persoana(int _balanta, bool _bilet);
        int getBalanata();
        void setBalanta(int _balanta);
        void cumparaBilet();
        bool getBilet();
    protected:
        bool bilet = false;
    private:
        int balanta = 0;
};

#endif // PERSOANA_H
