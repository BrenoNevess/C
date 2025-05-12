#include<stdio.h>
#include<stdlib.h>

int main(){
    float x, numero;
    printf("Digite o valor do produto: ");
    scanf("%f", &x);
    
    if(x <= 2.00){
        numero = x + 0.15;
        printf("Valor final: %.2f", numero);
    }

    else if(x > 2.00 && x < 5.00){
        numero = (x * 0.02) + x;
        printf("Valor final: %.2f", numero);
    }

    else if(x > 5.00 && x < 20.00){
        numero = (x * 0.10) + x;
        printf("Valor final: %.2f", numero);
    }

    else if(x > 20.00){
        numero = (x * 0.08) + x;
        printf("Valor final: %.2f", numero);
    }

    else {
        printf("O valor deve ser maior que 0!!");
    }
}