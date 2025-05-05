#include<stdio.h>
#include<stdlib.h>

int main(){
    float x, y, r;
    int o;
    printf("Digite dois numeros: \n");
    scanf("%f %f", &x, &y);

    printf("Qual operacao voce deseja fazer?\n");
    printf("1 = adicao\n");
    printf("2 = subtracao\n");
    printf("3 = multiplicacao\n");
    printf("4 = divisao\n");
    scanf("%d", &o);

    if(o == 1){
        r = x + y;
        printf("%f", r);
    }
    if(o == 2){
        r = x - y;
        printf("%f", r);
    }
    if(o == 3){
        r = x * y;
        printf("%f", r);
    }
    if(o == 4){
        r = x / y;
        printf("%f", r);
    }

    return 0;
}