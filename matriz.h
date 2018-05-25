#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

struct nodo
{
       int x,y;
       float dato;
       nodo *sig;

       //inicializando el nodo
       nodo (int a, int b, float c)
       {
            x=a;
            y=b;
            dato= c;
            sig= NULL;
        }
};

class matrix
{
      private:
              nodo * inicio,* fin;
      public:
             void crear (int);
             void insertarf (int,int,float);
             nodo *buscarXY (int,int);
             void leer ();
             void imprimir();
             void imprimirV();
             void creaM (int , int );
             void Gauss();
             matrix() {inicio=fin=NULL; }

};




#endif // MATRIZ_H_INCLUDED
