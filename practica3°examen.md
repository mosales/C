#Programa con malloc, realloc, punteros y estructuras
```c
#include <stdio.h>
#include<stdlib.h>

typedef struct{
        int dia;
        int mes;
        int anio;
} fecha;

fecha leer_fecha();
void imprimir_fecha(fecha);


int main() {

        fecha *fechas;
        int cont=0;
        char resp='s';

        while ((resp=='s')||(resp=='S')){

                //fecha nfecha=leer_fecha();
                cont++;
                if(cont==1){
                        fechas=(fecha*)malloc(sizeof(fecha));
                }else{
                        fechas=(fecha*)realloc(fechas, sizeof(fecha)*cont);
                }
                //fechas[cont-1]=nfecha;
                fechas[cont-1]=leer_fecha();
                printf("Desea introducir otro? [s/n]");
                scanf("%s",&resp);
        }

        for (int i = 0; i < cont ; i++) {
                imprimir_fecha(fechas[i]);
        }

        free(fechas);
        return 0;
}

fecha leer_fecha(){
        fecha lfecha;
        printf("introduce el dia:");
        scanf("%i",&lfecha.dia);
        printf("introduce el mes:");
        scanf("%i",&lfecha.mes);
        printf("introduce el anio:");
        scanf("%i",&lfecha.anio);

        return lfecha;
}

void imprimir_fecha(fecha lfecha){
        printf("\n%d / %d / %d",lfecha.dia,lfecha.mes,lfecha.anio);
}
```
