#include<stdio.h>



        float area(float);

        int main(){



                float lado,acuadrado;

                scanf("%f",&lado);

                acuadrado=area(lado);

                printf("el area de cuadrado de lado %.2f es %.2f\n",lado,acuadrado);

                return 0;

        }

        float area(float valor_lado){

                return valor_lado*valor_lado;

        }
