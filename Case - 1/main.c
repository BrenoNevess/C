#include<stdio.h>
#include<stdlib.h>

void diasemana(int x){
    switch(x){
        case 1: printf("Domingo");
        break;
        case 2: printf("Segunda");
        break;
        case 3: printf("Terça");
        break;
        case 4: printf("Quarta");
        break;
        case 5: printf("Quinta");
        break;
        case 6: printf("Sexta");
        break;
        case 7: printf("Sabado");
        break;
        default: printf("Este dia da semana nao existe");
    }
}

int main(){
    int semanadia;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &semanadia);
    
    diasemana(semanadia);

    return 0;
}