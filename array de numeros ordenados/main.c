#include <stdio.h>

int main() {

        int cantidad;


        printf("Ingrese la cantidad de numeros que desea registrar:");
        scanf("%d", &cantidad);
        int numeros[cantidad];

        for (int i = 0; i < cantidad; i++) {
                printf("Ingrese el numero %d:", i + 1);
                scanf("%d", & numeros[i]);
        }

        for (int i = 0; i < cantidad; i++) {
                printf("%d ", numeros[i]);

        }
        printf("\n \n");

        for (int k = 0; k <= cantidad; k++) {

                for (int j = k+1; j < cantidad; j++) {
                        if (numeros[k] > numeros[j]) {
                                int temp = numeros[j];
                                numeros[j] = numeros[k];
                                numeros[k] = temp;
                        }
                }
        }

        for (int i = 0; i < cantidad; i++) {
                printf("%d ", numeros[i]);

        }

        return 0;
}