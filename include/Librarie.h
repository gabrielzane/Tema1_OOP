#ifndef LIBRARIE_H
#define LIBRARIE_H
#include "Carte.h"
#include <string>
#include <list>

using namespace std;
class Librarie
{
    public:
        Librarie();
        virtual ~Librarie();

        string GetNume() { return Nume; }
        void SetNume(string val) { Nume = val; }
        string GetAdresa() { return Adresa; }
        void SetAdresa(string val) { Adresa = val; }
        int GetCodPostal() { return CodPostal; }
        void SetCodPostal(int val) { CodPostal = val; }
        list<Carte> GetStock() { return Stock; }
        void SetStock(list<Carte> val) { Stock = val; }

        void ImprumutaCarte(Utilizator user, Carte carte) {
            Carte c1 = Stock.find(carte);
            if(c1.GetNumarExemplare() > 0) {

            }
            else {
                cout<<"Stock indisponibil"<<endl;
            }
        }
    protected:

    private:
        string Nume;
        string Adresa;
        int CodPostal;
        list<Carte> Stock;
};

#endif // LIBRARIE_H
