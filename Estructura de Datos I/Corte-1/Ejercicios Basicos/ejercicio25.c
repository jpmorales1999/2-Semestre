#include <stdio.h>
#include <stdlib.h>

int main()
{
//Programa que determine entre 5 alumnos los 3 examenes que se le realizaron, cuantos los ganaron todos, uno, o el examen final
float calif1=0,calif2=0,calif3=0,aprobadouno=0, aprobadofinal=0, aprobadotodos=0;

 for (int x=1; x<=5; x++){
  printf("Digite la calificacion del examen 1 del alumno %d:", x);
  scanf("%f",&calif1);
  printf("Digite la calificacion del examen 2: del alumno %d:", x);
  scanf("%f",&calif2);
  printf("Digite la calificacion del examen 3: del alumno %d:", x);
  scanf("%f",&calif3);

  if (calif1>=3&&calif2>=3&&calif3>=3){
   aprobadotodos++;
  }
  if (calif1>=3||calif2>=3||calif3>=3){
   aprobadouno++;
  }
  if (calif3>=3){
   aprobadofinal++;
  }
 }
 printf("Alumnos que aprobaron todo: %1.0f\n", aprobadotodos);
 printf("Alumnos que aprobaron al menos uno: %1.0f\n", aprobadouno);
 printf("Alumnos que aprobrobaron solo el ultimo: %1.0f\n", aprobadofinal);


    system("pause");
    return 0;
}
