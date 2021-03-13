#ifndef CARTE_H
#define CARTE_H
#include <string>

using namespace std;
class Carte
{
    public:
        Carte();
        virtual ~Carte();

        string GetNume() { return Nume; }
        void SetNume(string val) { Nume = val; }
        string GetAutor() { return Autor; }
        void SetAutor(string val) { Autor = val; }
        int GetNumarPagini() { return NumarPagini; }
        void SetNumarPagini(int val) { NumarPagini = val; }
        string GetEditura() { return Editura; }
        void SetEditura(string val) { Editura = val; }
        string GetCategorie() { return Categorie; }
        void SetCategorie(string val) { Categorie = val; }
        int GetNumarExemplare() { return NumarExemplare; }
        void SetNumarExemplare(int val){ NumarExemplare = val; }

    protected:

    private:
        string Nume;
        string Autor;
        int NumarPagini;
        string Editura;
        string Categorie;
        int NumarExemplare;
};

#endif // CARTE_H
