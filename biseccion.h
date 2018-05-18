#ifndef BISECCION_H
#define BISECCION_H
#include "polinomio.h"

class Biseccion
{
      int inter;
      float a, b, xm, er;

	public:
		// class constructor
		Biseccion(int x);
		Polinomio Leer(Polinomio B);
		void Iteracion(Polinomio B);
		//float Funcion(float X);
		// class destructor
		~Biseccion();
};

#endif // BISECCION_H
