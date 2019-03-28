#include <stdio.h>

int main() {
        int n,resul;
        printf("Ingrese un numero para sacar su factorial");
        scanf("%d",&n);
        resul=1;
        for(int i=1;i<=n;i++){
                resul=resul*i;
        }

        printf("El factorial de %d es: %d",n,resul);
        return 0;
}