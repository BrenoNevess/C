#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    printf("Informe o codigo de um produto: ");
    scanf("%d", &x);

    if(x >= 1 && x <= 20){
        printf("Origem do produto: Europa");
    }

    else if(x > 21 && x <= 40){
        printf("Origem do produto: Asia");
    }

    else if(x >= 41 && x <= 60){
        printf("Origem do produto: America");
    }

    else if(x >= 61 && x <= 80){
        printf("Origem do produto: Africa");
    }

    else if(x >= 81){
        printf("Origem do produto: Europa");
    }

    else if(x = 0){
        printf("O produto deve conter um numero maior que zero.");
    }

    return 0;
}