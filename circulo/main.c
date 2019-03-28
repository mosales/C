#include <stdio.h>
#include <math.h>
int main() {

        float area,radio;

        printf("Ingrese el radio del circulo");
        scanf("%f",&radio);

        area=M_PI*(radio*radio);
        printf("El areaes:%.2f",area);



        return 0;
}