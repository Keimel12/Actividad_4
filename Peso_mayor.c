#include <stdio.h>
/* 21.Escribir un programa que solicite al usuario el ingreso de tres números 
diferentes y muestre en pantalla al mayor de los tres.*/
int main() {
  int n1, n2, n3;
  printf ("Dime un numero: ");
  scanf ("%d", &n1);

printf ("Dime un numero: ");
  scanf ("%d", &n2);

printf ("Dime un numero: ");
  scanf ("%d", &n3);

    if (n1 > n2 && n1 > n3)
    printf ("El mayor es: %d", n1);


if (n2 > n1 && n2 > n3)
  printf ("El mayor es: %d", n2);


if (n3 > n1 && n3 > n2)
  printf ("El mayor es: %d", n3);
  return 0;
}