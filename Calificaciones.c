/*
33. Escribir un programa que pregunte al usuario si desea analizar calificaciones de alumnos y, sólo si responde “S” comenzará el procesamiento de los datos, hasta que el usuario ingrese algo diferente de “S”. Por cada alumno, permitir ingresar su calificación. Si es mayor a 4 el alumno está aprobado. Finalmente, mostrar “Porcentaje de alumnos aprobados: x %” (donde x es el porcentaje de aprobados sobre el total de calificaciones procesadas). También se debe imprimir “Promedio de los aprobados: y” (donde y es la calificación promedio, sólo de los alumnos aprobados).
*/

#include <stdio.h>
 
int main() {
  char letra;
  int alumno, notas = 0, aprobados = 0, reprobados, promedio1, promedio2, z=0, i=1;

  printf ("\n -¿Desea calificar a los alumnos?");
   printf ("\n -Coloque ´s´ para confirmar: ");
  do
    {
      
      scanf("%c", &letra);
      if (letra != 's'){
        promedio1 = notas / aprobados;
        promedio2 = aprobados;
        printf ("\n El promedio del salón es: %d", promedio1);
        printf ("\n El total de aprobados es: %d\n", promedio2);
        printf ("\n -Fin del proceso");
        return 0;
        }
          
      printf("\n -¿Promedio del alumno?: ");
			scanf( "%d", &z);		

			if (z > 4 && z <= 10)
			{
				printf ("\n ¡Alumno APROVADO!\n");
				aprobados = aprobados+1;
        notas = notas+z;
			}
      else
      {
				if (z >= 0 && z <= 4)
        {
          printf ("\n Alumno REPROBADO...\n");
        }
        else
        {
          printf ("\n-ERROR, el promedio debe ser de 0 a 10, por favor intente de nuevo\n");
        }
			}
      
      printf ("\n -¿Seguir calificando? (s): ");
      scanf("%d", &letra);
        
      z = 0;

      }while (letra == 's');
 
  return 0;
  }