#include <stdio.h>

float funcion(float);

float fRiemann(float, float, int);

int main() {
        float a, b, suma;
        int n;

        printf("Ingrese limite inferior:");
        scanf("%f", &a);
        printf("Ingrese limite superior:");
        scanf("%f", &b);
        printf("Ingrese n:");
        scanf("%d", &n);

        suma = fRiemann(a, b, n);

        printf("\n La sumatoria de %.2f a %.2f con %d elementos es: %f", a, b, n,
               suma);
        return 0;
}

float funcion(float valor) {
        return valor * valor;
}

float fRiemann(float li, float ls, int n) {
        float cuadros = (ls - li) / n;
        //printf("%.2f %.2f %d %.2f\n", li, ls, n, cuadros);
        float suma = 0;

        for (float v = li; v <= ls; v += cuadros) {
                suma += cuadros * funcion(v);
                //printf("%f", v);
        }
        return
                suma;
}