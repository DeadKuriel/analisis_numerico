#include <iostream>
#include "biseccion.h"

using namespace std;

int main ()
{
    int opc = 0;

    cout<<"METODOS NUMERICOS"<<endl;
    cout<<"Raiz"<<endl<<"1)Biseccion."<<endl;

    cout<<"Ingrese el numero del metodo que desea usar: ";
    cin>>opc;
    switch(opc)
    {
               case 1: Biseccion test(1);
               break;
    }

    system("pause");
    return 0;
}
