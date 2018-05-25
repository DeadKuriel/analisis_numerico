#include "matriz.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void matrix :: Gauss ()
{
    float factor, n;
    nodo *A, *B;
    int i, j, x =1;


    do
    {
        j = x + 1;

        do
        {
            A = buscarXY(x,x);
            B = buscarXY(j,x);

            factor = B ->dato / A ->dato;

            i=x;

            do
            {
                   A = buscarXY (x,i);
                   B = buscarXY (j,i);

                   n = A ->dato * factor; //para corregir numeros pequeños a cero

                   B -> dato = B ->dato - n;

                   i++;

             }                                               while (i <= fin->y);

         }                                                   while (j <= fin->x);

         x++;
    }                                                        while (x <= fin->x-1);


                                    //Mensaje al usuario
    cout << "Se comienza Gauss";

    imprimir ();

    system("pause");
}

void matrix::creaM (int x, int y)
             {
             	for ( int i=1;i<=x;i++)
             	{
             		for ( int j=1;j<=y;j++)
             		{
                    insertarf(i,j,0);
                    }
                }
            }

nodo * matrix:: buscarXY(int a, int b)
{
     nodo *buscar=inicio;
     while (buscar!=NULL)
     {
                     if(buscar ->x==a && buscar ->y==b)
                     return (buscar);
                     buscar=buscar->sig;
      }
                     return NULL;

 }

void matrix::crear(int a)
{

    int b=a+1;

    creaM(a,b);
}

void matrix:: insertarf(int a, int b, float c)
{
     if (inicio==NULL)
     {
                     inicio = new nodo (a,b,c);
                     fin=inicio;
                     }
                     else
                     {
                         nodo *term= new nodo (a,b,c);
                         fin-> sig=term;
                         fin=term;
                         }
}

void matrix:: leer()
{
     nodo * aux =inicio;
     int i=aux->x;
     cout<<"teclee los valores de la matriz:"<<endl;
     while (aux !=NULL)
     {

            cout<<i;
           if (aux->y==fin->y)
           {
                              i=i+1;

           }
           cout<<" ---> x "<<aux->y<<": ";
           cin>>aux->dato;
           aux=aux->sig;
           }
           system("cls");
     }


void matrix::imprimirV()
{
     if(inicio==NULL)
     cout<<"Lista vacia"<<endl;
     else
     {
         cout<<"La matriz es:"<<endl;
         nodo *aux=inicio;
         while(aux!=NULL)
         {
         	cout<<"("<<aux->x<<")("<<aux->y<<")="<<aux->dato<<endl;
         	aux=aux->sig;
         }
     }
 }

void matrix::imprimir()
{
     if(inicio==NULL)
     cout<<"Lista vacia"<<endl;
     else
     {
         cout<<"La matriz es:"<<endl;
         nodo *aux=inicio;
         while(aux!=NULL)
         {

                         if(aux->y==fin->y)
                         {cout<<"= "<<aux->dato;
                         cout<<endl;}
                         else

                            cout<<aux->dato<<" ";
         aux=aux->sig;
                         }
                         }}


int main()
{
    int n;

 matrix A,B;
 cout<<"Teclee el numero de ecuaciones: "<< " ";
 cin>>n;
 A.crear (n);
 A.leer();
 cout<<"  "<<endl<<endl<<endl;
 B=A;
 B.imprimir();
 B.Gauss();
 //B.imprimir();

  system("pause");
}











//linea 45

/*
             //Factor 1 y 2
    A = buscarXY(1,1);
    B = buscarXY(2,1);

    factor = B ->dato / A ->dato;

    //ciclo para multiplicar factor por la linea 1
    /*i = 1;
    do
    {
        A = buscarXY (1,i);
        A -> dato = A ->dato * factor;
        i++;
    } while (i<= fin->y);

    //cliclo para restar la primer linea modificada menos la segunda
    i = 1;
    do
    {
        A = buscarXY(1,i);
        B = buscarXY(2,i);

        B ->dato = B ->dato - A ->dato;

        i++;
    } while (i<= fin->y);

    //ciclo para multiplicar linea1 por el facto y luego restarlo con la linea2

    i=1;

    do
    {
        A = buscarXY (1,i);
        B = buscarXY (2,i);

        n = A ->dato * factor;
        B -> dato = B ->dato - n;
        i++;
    } while (i<= fin->y);

                 //Factor 1 y 3

    A = buscarXY(1,1);
    B = buscarXY(3,1);

    factor = B ->dato / A ->dato;

    i=1;

    do
    {
        A = buscarXY (1,i);
        B = buscarXY (3,i);

        n = A ->dato * factor; //para corregir numeros pequeños a cero

        B -> dato = B ->dato - n;
        i++;
    } while (i<= fin->y);

    */
