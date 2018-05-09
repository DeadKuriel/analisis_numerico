


// Newton


vopid Matrix :: Newton()
{
      float Xintp; suma = 0.0, multi = 1.0; //valor a interpolar
      int G, i , j; //grado del polinomio
      
      cout <<"Tecleé el valor a interpolar">>;
      cin >> Xintp;
      
      cout <<"Tecleé el grado del polinomio a interpolar">>;
      cin >> G;
      
      nodo *X;
      
      for  ( i=0; i <= 10; i++)
      {
           for  ( j=0; j < i; j++)
           {
                X = BuscarXY (j+1, 1);
                multi = (Xintp - X -> dato) *multi;
           }
           
           suma = suma +(calcular_b () * multi);
           
           multi = 1.0;
      }
      
      cout << "El valor es: ">;
      }
      
}

// Funcion calcular b

float Matrix :: Calcular_b (int ini, int final)
{
      nodo *X, Y*;
      
      if ( ini == 0 && final == 0)
      {
           x = BuscarXY(ini + 1, 2);
           return x -> dato;
      }
      else 
      {
           if (( ini - final) ==1)
           {
                 X = BuscarXY (ini +1, 1);
                 X = BuscarXY (final +1, 1);
           
                 float divisor;
           
                 divisor = x-> dato - y -> dato;
           
                 X =buscarXY (ini +1 , 2);
                 Y =buscarXY (final +1 , 2);
           
                 divisor = (x-> dato - y -> dato) / divisor;
           
                 return (divisor);      
           }
           
           else
           {
               X = BuscarXY (ini +1, 1);
               Y = BuscarXY (final +1, 1);
               
               return ((Calcular_b (ini, final +1) - Calcular_b (ini -1, final)) / (x-> dato - y -> dato);
           }
      }
}
               
               
           
