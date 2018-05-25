#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

class nodo
{
       int x,y;
       float dato;
       nodo *sig;

       public:
       nodo (int a, int b, float c)
       {
            x=a;
            y=b;
            dato= c;
            sig= NULL;
            }

};



#endif // MATRIZ_H_INCLUDED
