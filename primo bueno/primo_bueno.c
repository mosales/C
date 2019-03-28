#include<stdio.h>

int main(){
        int num;
        int primo=0;
        scanf("%d",&num);

        for (int i=2; i<num; i++){
                if(num%i==0){
                        primo=1;
                }

        } if(!primo){
                printf("El numero %d es primo", &num);
        }
        return 0;
}