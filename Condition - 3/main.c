#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade;  
    printf("Digite sua idade\n");
    scanf("%d", &idade);

    if(idade < 13){
        printf("Crianca");
    }
    else if(idade >= 13 && idade < 20){
        printf("Adolescente");
    }
    else if(idade >= 20 && idade < 65){
        printf("Adulto");
    }
    else if(idade >= 65){
        printf("Idoso");
    }
    return 0;
}