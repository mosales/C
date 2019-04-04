#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("¿Cuantos números desea capturar? ");
    scanf("%d", &n);

    int *arreglo = (int *) malloc(sizeof(int)*n);
    //int arreglo[n];
    for (int i=0; i<n; i++){
        arreglo[i]=i+1;
    }

    int *ptr;
    ptr=&arreglo[0];
    for (int i=0; i<n; i++){
        printf("%d \n", arreglo[i]);
    }

    printf("\n");
    return 0;
}