#include <stdio.h>

int main() {

        int alumnos, unidades;


        printf("ingrese el numero de alumnos a capturar:");
        scanf("%i",&alumnos);
        printf("ingrese el numero de unidades:");
        scanf("%i",&unidades);


        float arreglo[alumnos][unidades], proma[alumnos], promu[unidades];

        for (int i = 0; i < alumnos ; ++i) {
                proma[i]=0;
        }

        for (int i = 0; i < unidades ; ++i) {
                promu[i]=0;
        }


        for (int i = 1; i <=alumnos; ++i) {

                for (int j = 1; j <= unidades ; ++j) {
                        float temp;
                        printf("Ingrese la calificacion %i del alumno %i",j,i);
                        scanf("%f",&temp);
                        arreglo[i][j]=temp;
                        proma[i]+=temp;
                        promu[j]+=temp;
                }
        }

        for (int i = 0; i < alumnos; i++) {
                for (int j = 0; j < unidades ; j++) {

                        printf("%.2f \t",arreglo[i][j]);
                }

                printf("%.2f\n",(proma[i]/unidades));
        }

        for (int j = 0; j < unidades ; j++) {

                printf("%.2f \t",(promu[j]/alumnos));

        }
        printf("\n");

        return 0;
}