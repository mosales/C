#include <stdio.h>

int main() {
        int numero;
        long long resul, operacion;

        printf("Ingresa un numero para averiguar si es primo: ");
        scanf("%d",&numero);


        resul=1;
        for(int i=1;i<numero;i++){
                resul=resul*i;
        }

        operacion=resul+1;

        if((operacion%7==0)){
                printf("\nEl numero -- %d -- es un numero primo",numero);
        }else   printf("\nEl numero -- %d -- NO es un numero primo",numero);


        return 0;
}


