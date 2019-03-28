#include <stdio.h>
#include <math.h>
#include <stdatomic.h>

int main() {
double a,b,c, x1, x2, sol1, sol2,x;
long double adentro_raiz;
double a2;

printf("Ingrese el valor de a:");
scanf("%lf",&a);
printf("Ingrese el valor de b:");
scanf("%lf",&b);
printf("Ingrese el valor de c:");
scanf("%lf",&c);

adentro_raiz=((b*b)-(4*a*c));
a2= (2 * a);

if (a2 == 0) {
        printf("No es posible calcular");
}else if (adentro_raiz<0) {

        x1=((-b)+(sqrt(adentro_raiz)));
        x2=((-b)-(sqrt(adentro_raiz)));

        sol1=x1/a2;
        sol2=x2/a2;

        printf("Los resultados son: \n %lf i \n %lf i",sol1,sol2);
        printf("\nLa solucion es imaginaria i");
}else if (adentro_raiz==0){

        x1=((-b)/(a2))+(sqrt(adentro_raiz)/(a2));
        sol1=x1;

        printf("El resultado es: \n %lf",sol1);



} else{


        x1=((-b)+(sqrt(adentro_raiz)));
        x2=((-b)-(sqrt(adentro_raiz)));

        sol1=x1/a2;
        sol2=x2/a2;


        printf("Los resultados son: \n %lf \n %lf",sol1,sol2);



}

        return 0;
}