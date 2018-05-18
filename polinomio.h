#ifndef POLINOMIO_H
#define POLINOMIO_H

class Polinomio
{
    private:
        int GP, *Expo;
        float *Coef, TI;

	public:
		// class constructor
		Polinomio(void);
		void Inicializar();
		void Leer();
		void LeerCoef(float,int);
		void Inicializar(int);
		void Imprimir();
		float Evaluar(float);
		Polinomio Derivar();
		// class destructor
		~Polinomio();
};

#endif // POLINOMIO_H
