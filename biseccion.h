#ifndef BISECCION_H
#define BISECCION_H

class Biseccion
{
      int inter;
      float a, b, er;

	public:
		// class constructor
		Biseccion(int x);
		void Leer(int x);
		float Funcion(float X);
		// class destructor
		~Biseccion();
};

#endif // BISECCION_H
