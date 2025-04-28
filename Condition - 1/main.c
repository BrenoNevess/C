#include<stdio.h>
#include<stdlib.h>

void parouimpar (int n1){
    if(n1 % 2 == 0 ){
        printf("Este numero eh par");
    } else{
        printf("Este numero eh impar");
    }
}

int main(){
    int n1;
    printf("Escreva um numero: ");
    scanf("%d", &n1);
    parouimpar(n1);
    return 0;
}