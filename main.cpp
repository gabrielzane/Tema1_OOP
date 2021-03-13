#include <iostream>
#include "Utilizator.h"
#include <list>
#include "Librarie.h"
using namespace std;

int main()
{
    Utilizator u1;

    u1.SetTipAbonament(Premium);
    u1.SetNume("test");
    cout<<u1.GetNume()<<" "<<u1.GetTipAbonament()<<endl;

    list<Carte> stock;

    Carte c1;
    c1.SetAutor("tesT");


    stock.push_front(c1);

    Librarie l1;
    l1.SetStock(stock);


}
