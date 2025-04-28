#include <stdio.h>
#include <stdlib.h>

float notamedia (float n1, float n2, float n3){
 float media = (n1 + n2 + n3)/3;
 return media;
}

int main(){
    float media, p1, p2, p3;
    printf("Escreva suas 3 notas:\n");
    scanf("%f", &p1);
    printf("\n");
    scanf("%f", &p2);
    printf("\n");
    scanf("%f", &p3);

    media = notamedia(p1,p2,p3);

    printf("Sua media e: %.2f", media);
    return 0;
}
