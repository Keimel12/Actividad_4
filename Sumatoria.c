#include <stdio.h>
/*27.Escribir un programa que muestre la sumatoria de todos los números entre el 0 
y el 100 */
int main() {
  int cont = 0;
  for (int i = 1; i <= 100; i++)
    {
      cont += i;     
    }
  printf ("La suma de todos los números es: %d", cont);
  return 0;
}