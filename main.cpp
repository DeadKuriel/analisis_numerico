#include <stdio.h>
#include <iostream>
#include <graphics.h>
//#include "cardgame.h"
//Inician Headers de funciones
#include "biseccion.h"

using namespace std;
/*
void PlayGames()
{
    Cardgame bridge(0);
    Cardgame blackjack(8);
    Cardgame solitaire(1);
    Cardgame poker(5);
}

int main()
{
    PlayGames();
    Cardgame pokemon(13);
    getchar();
    return 0;
}
*/

int main()
{
    int opc = 0;
    
    cout<<"METODOS NUMERICOS"<<endl;
    cout<<"Raiz"<<endl<<"1)Biseccion."<<endl;
    
    cout<<"Ingrese el numero del metodo que desea usar: ";
    cin>>opc;
    switch(opc)
    {
               case 1: Biseccion test(1,2);
               break;
    }
    
    system("pause");
    return 0;
}
