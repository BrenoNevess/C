#include <stdio.h>
#include <math.h>

float distancia(float Xa, float Ya, float Xb, float Yb){
    return sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
}

int main(){
    float Xa, Ya, Xb, Yb, Xc, Yc;
    float lado1, lado2, lado3, perimetro;

    printf("Me fale as coordenadas do ponto A: ");
    scanf("%f %f", &Xa, &Ya);
    printf("Me fale as coordenadas do ponto B: ");
    scanf("%f %f", &Xb, &Yb);
    printf("Me fale as coordenadas do ponto C: ");
    scanf("%f %f", &Xc, &Yc);

    lado1 = distancia(Xa, Ya, Xb, Yb);
    lado2 = distancia(Xb, Yb, Xc, Yc);
    lado3 = distancia(Xc, Yc, Xa, Ya);

    perimetro = lado1 + lado2 + lado3;

    printf("O perimetro deste triangulo eh: %.2f", perimetro);
    return 0;
}