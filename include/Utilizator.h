#ifndef UTILIZATOR_H
#define UTILIZATOR_H
#include <string>
#include <list>
#include <Carte.h>
using namespace std;

enum Abonament {
    Premium = 0,
    Junior = 1,
    Normal = 2
};
class Utilizator
{
    public:
        Utilizator();
        virtual ~Utilizator();

        string GetNume() { return Nume; }
        void SetNume(string val) { Nume = val; }
        string GetPrenume() { return Prenume; }
        void SetPrenume(string val) { Prenume = val; }
        int GetVarsta() { return Varsta; }
        void SetVarsta(int val) { Varsta = val; }
        Abonament GetTipAbonament() { return TipAbonament; }
        void SetTipAbonament(Abonament val) { TipAbonament = val; }
        list<Carte> GetCartiImprumutate() { return CartiImprumutate; }
        void SetCartiImprumutate(list<Carte> val) { CartiImprumutate = val; }


    protected:

    private:
        string Nume;
        string Prenume;
        int Varsta;
        Abonament TipAbonament;
        list<Carte> CartiImprumutate;
};

#endif // UTILIZATOR_H
