#include "biseccion.h"
#include <iostream>
#include "polinomio.h"

using namespace std;

Biseccion::Biseccion(int x)
{
    system("cls");
    cout<<"Metodo de Biseccion\n";
    Leer(1);
}

void Biseccion::Leer(int x)
{
    Polinomio p(1);
    cout<<"Ingrese el valor del punto a: ";
    cin>>a;
    cout<<"Ingrese el valor del punto b: ";
    cin>>b;
    cout<<"Ingrese el error permitido: ";
    cin>>er;
    cout<<"Ingrese el numero de intervalos: ";
    cin>>inter;
}

float Funcion(float X)
{
    int
}

Biseccion::~Biseccion(){}
