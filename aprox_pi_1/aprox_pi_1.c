#include<stdio.h>
#include<math.h>
int main(){
int k=1;
double a_raiz=0;
double resultado=0;
for(k=1;k<=1000000;++k){
a_raiz=a_raiz+(6/(pow(k,2)));

}

resultado=sqrt(a_raiz);
printf("El valor aproximado de pi es: %lf",resultado);
return 0;
}