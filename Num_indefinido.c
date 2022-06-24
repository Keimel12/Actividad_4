/*
32. Escribir un programa que permita al usuario ingresar una cantidad de números positivos indefinida (la cantidad que ingresará no se conoce y puede cambiar en cada ejecución), finalizando cuando ingresa el número 0 (que no se tendrá en cuenta). Una vez terminada la lectura de números, informar cuál fue el mayor de los números ingresados.
*/

#include <stdio.h>

int main()
{
	int i=1, num, mayor;
  printf( "\n-Ingrese sus números \n");
    while (i!= 0)
    {
    	printf( "x= ");
        scanf( "%d", &num);
      if (num > mayor)
        mayor=num;
      if (num == 0)
        i--;
    }
    printf("\n-El mayor fue: %d\n", mayor);
    return 0;
} 