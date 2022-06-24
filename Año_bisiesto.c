#include <stdio.h>
/*Escribir un programa que permita saber si un año es bisiesto. Para que un año 
sea bisiesto debe ser divisible por 4 y no debe ser divisible por 100, excepto 
que también sea divisible por 400. */
int main(void) {
  int year;
  printf ("Dime un año: ");
  scanf ("%d", &year);
if ((year%4 == 0 && year%100 != 0) || year%400 == 0)
{
  printf ("El año %d es bisiesto ", year); 
 }
else
printf ("No es un año bisiesto");
  
  return 0;
}