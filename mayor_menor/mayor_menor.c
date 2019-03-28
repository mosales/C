#include <stdio.h>

int main() {
        int n;
        float mayor, menor;


        printf("Ingrese el numero de alumnos: ");
        scanf("%d",&n);

        printf("Ingrese la calificacion del alumno 1: ");
        scanf("%f",&mayor);
        menor=mayor;

        for (int i = 2; i <=n ; ++i) {
         float calif;
         printf("Ingrese la calificacion del alumno %d:",i);
         scanf("%f",&calif);

         if(calif<menor){
                 menor=calif;
         } else if(calif>mayor){
                 mayor=calif;
         }


        }
        printf("\nLa calificacion mayor es: %.2f",mayor);
        printf("\nLa calificacion menor es: %.2f",menor);
        return 0;
}