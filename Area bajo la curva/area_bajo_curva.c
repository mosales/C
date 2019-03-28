#include <stdio.h>

int main() {

        double a, b;
        double resul;
        double cuadros;


        printf("Ingrese los limites de a y b:");
        scanf("%lf %lf",&a ,&b);
        cuadros=(b-a)/10000;

        for (float x=a ; x <= b ; x+=cuadros) {

                resul+=((x*x)*(cuadros));


        }
        printf("%lf",resul);
        return 0;
}