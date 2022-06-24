#include <stdio.h>
/*28.Escribir un programa que, dado un número por el usuario, muestre todos sus 
divisores positivos. Recordar que un divisor es aquel que divide al número de 
forma exacta (con resto 0). */
int main() {
  int n, resto;
  int i;
  printf ("Dime un numero: ");
  scanf ("%d", &n);
  for (int i = 1; i <= n; i++)
    {
     resto = n % i;
      if (resto == 0)
        printf ("\nlos divisores exactos son: %d", i);
    }
  return 0;
}