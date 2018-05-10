#include "polinomio.h"
#include <iostream>
#include <math.h>

using namespace std;

Polinomio::Polinomio(int x)
{
    Inicializar();
    Leer();
    Imprimir();
}


void Polinomio::Inicializar()
{
    int i;
    cout<<"Ingrese el grado del polinomio: ";
    cin>>GP;

    Coef = new float[GP];
    Expo = new int[GP];

    for(i=0;i<GP;i++)
        Coef[i] = 0;

    for(i=1;i<GP;i++)
        Expo[i-1] = i;
}

void Polinomio::Leer()
{
    for (int t = (GP-1); t>=0 ; t--)
    {
        cout<<"Teclee el coeficiente de grado "<<t+1<<": ";
        cin>>Coef[t];
    }
    cout<<"Ingrese el valor del termino independiente: ";
    cin>>TI;
}

void Polinomio::LeerCoef(float c,int p)
{
    if(p==GP)
        TI=c;
    else
        Coef[GP-p-1]=c;
}

void Polinomio::Inicializar(int x)
{
    int i;
    GP=x;
    Coef = new float[GP];
    Expo = new int[GP];

    for(i=0; i<GP; i++)
        Coef[i] = 0;

    for(i=1; i<=GP; i++)
        Expo[i-1] = i;
}

void Polinomio::Imprimir()
{
    cout<<"El Polinomio es: "<<endl;
    for(int n=GP-1; n>=0; n--)
    {
        if(Coef[n]>0)
            cout<<"+"<<Coef[n]<<"x^"<<Expo[n];
        else
            cout<<Coef[n]<<"x^"<<Expo[n];
    }
    cout<<"+"<<TI<<endl;
}

float Polinomio::Evaluar(float x)
{
    float s=0.0;
    for(int i=0; i<=GP; i++)
    {
        s=s+pow(x,Expo[i])*Coef[i];
    }
    s=s+TI;
    return(s);
}

Polinomio Polinomio::Derivar()
{
  /*Polinomio Fx;
    Fx.GP=GP-1;

    Fx.Expo = new int[GP-1];
    Fx.Coef = new float[GP-1];

    for(int i=GP-1; i>0; i--)
    {
        Fx.Expo[i-1] = Expo[i]-1;
        Fx.Coef[i-1] = Coef[i] * Expo[i];
    }
    Fx.TI = Coef[0];
    return Fx;
   */
}


Polinomio::~Polinomio(){}
