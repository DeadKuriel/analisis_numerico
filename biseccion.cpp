#include "biseccion.h"
#include <iostream>
#include "polinomio.h"

using namespace std;

Biseccion::Biseccion(int x)
{
    Polinomio b;

    system("cls");
    cout<<"Metodo de Biseccion\n";
    b=Leer(b);
    Iteracion(b);
}

Polinomio Biseccion::Leer(Polinomio B)
{
    Polinomio p=B;

    cout<<"Ingrese el valor del punto a: ";
    cin>>a;
    cout<<"Ingrese el valor del punto b: ";
    cin>>b;
    cout<<"Ingrese el error permitido: ";
    cin>>er;
    cout<<"Ingrese el numero de intervalos: ";
    cin>>inter;
    p.Inicializar();
    p.Leer();
    p.Imprimir();
    return p;
}

void Biseccion::Iteracion(Polinomio B)
{
    Polinomio p=B;
 /* Para saber en que variable se sustituira xm
  * se debe evaluar la funcion en a, b y xm,
  * y xm se sustituira en la variable con la que no
  * comparta signo
  */
    for(int i=0;i<=inter;i++)
    {
        xm = (a+b)/2;
        if ((p.Evaluar(xm)*p.Evaluar(a)) < 0) //Quiere decir que es -
            a=xm;
        else
            b=xm;

        cout<<inter<<"  |  "<<a<<"  |  "<<b<<"  |  "<<xm<<"  |  "<<p.Evaluar(xm)<<endl;
    }
}

/*float Biseccion::Funcion(float X)
{*
 *   return 1;
}*
 */
Biseccion::~Biseccion(){}
