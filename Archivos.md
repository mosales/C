# C

```C
#include <stdio.h>


int main(){
    FILE *fp;
    float valor = 100.5;

    fp = fopen("Datos.txt", "w");
    fprintf(fp, "Hola desde C\n");
    fprintf(fp, "este es en Ejemplo\n");
    fprintf(fp, "de Programación Básica");
    fclose(fp);

    char linea[255];
    fp = fopen("Datos.txt", "r");
    do{
        fgets(linea, 255, fp);
        puts(linea);
    }while(!feof(fp));
    fprintf(fp, "Hola de NUevo");

    fclose(fp);

    return 0;
}
```
