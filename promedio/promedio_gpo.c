#include <stdio.h>

int main() {
        int n;
        float suma,promedio;

        printf("Ingrese el numero de estudiantes en el grupo:");
        scanf("%d",&n);

        for (int i = 1; i <=n ; ++i) {
                float calif;
                printf("Ingrese la Calificacion del estudiante %d",i);
                scanf("%f",&calif);
                suma=suma+calif;
        }

        promedio=suma/n;
        printf("El promedio del grupo es: %.2f", promedio);
        return 0;
}