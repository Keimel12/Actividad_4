/*
34. Escribir un programa que, dado un número entero por el usuario (guardado como int), muestre la suma de todos sus dígitos.
*/

#include<stdio.h>
main(){
       int N;
       int suma=0;
       int resto=0;
       printf("\n-Ingrese un numero: ");
       scanf(" %d",& N);
       while (N!=0){
             resto=N%10;
             suma=suma+resto;
             N=N/10;
       }
       printf("\nLa suma de sus digitos es: %d",suma);
  return 0;
}