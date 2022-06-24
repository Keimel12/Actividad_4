#include <stdio.h>
/*30.Escribir un programa que, dado un número entero positivo, calcule y muestre 
su factorial. El factorial de un número se obtiene multiplicando todos los 
números enteros positivos que hay entre el 1 y ese número. El factorial de 0 es 
1. */

int main()
{
    int n;
    int cont = 1;
    
    printf("Dime un numero para obtener el factorial: ");
  scanf("%d", &n);
  if(n < 0){
    printf("Numero invalido!!");
    return 0;
  }
    for (int i = 1; i <= n; i++)
    {
        cont *= i;
    }  
    printf("El factorial es: %d", cont);
    return 0;
}