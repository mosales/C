#include <stdio.h>
#include <math.h>
int main() {
        int k=1;
        double multiplicacion=1;
        double resultado=0;
        for (k = 1; k <= 10000 ; ++k) {
            multiplicacion*= (((2*k)*(2*k))/ (double)
                    (((2*k)-1)*((2*k)+1)));

        }
        resultado=2*multiplicacion;
       // resultado=2*multiplicacion;
        printf("El valor aproximado de pi es: %lf",resultado);
        return 0;
}