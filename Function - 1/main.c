#include <stdio.h>
#include <stdlib.h>

void resultado(int n1, int n2){
    int soma = n1 + n2;
    int vezes = n1 * n2;
    int menos = n1 - n2;
    float div = n1/n2;
    int resto = n1 % n2;

    printf("Soma: %d \n", soma);
    printf("Mult.: %d\n", vezes);
    printf("Subtr.: %d\n", menos);
    printf("Div.: %f\n", div);
    printf("Resto: %d\n", resto);
}

int main(){
    int a, b;
    printf("Escolha dois numeros: \n");
    scanf("%d", &a);
    printf("\n");
    scanf("%d", &b);
    
    resultado(a, b);

    return 0;
}