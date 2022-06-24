/*
31. Escribir un programa que permita al usuario ingresar 6 números enteros, que pueden ser positivos o negativos. Al finalizar, mostrar la sumatoria de los números negativos y el promedio de los positivos. No olvides que no es posible dividir por cero, por lo que es necesario evitar que el programa arroje un error si no se ingresaron números positivos.
  */

#include<stdio.h>

int main()
{

  float prom,  num, neg = 0, pos = 0;
  int n = 6, i, s = 0;
  
  for(i = 1; i <= n; i++)
  {
    printf("%d. Numero: ", i);
    scanf("%f", &num);
    if(num > 0)
    {
      pos += num; 
      s = s+1;
      prom = pos/s;
    }
    else
    {
      neg -= num;
    }
  } 
  
    if(pos == 0){
  printf("No se puede dividir entre 0, por favor intente con otra expresion");
      if(neg > 0){
        printf("\nLa sumatoria de los numeros negativos es: -%.1f", neg);
        }
      return 0;
  }
  
  printf("\nLa sumatoria de los numeros negativos es: -%.1f", neg);
  
  printf("\nEl promedio de los positivos es: %.1f", prom);
  return 0;
}