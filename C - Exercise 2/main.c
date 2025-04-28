#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg, h, imc = 0;
    printf("\n Me fale seu peso em KG: ");
    scanf("%f", &kg);
    printf ("\n Agora me diga sua altura em metros: ");
    scanf("%f", &h);

    imc = kg / (h*h);

    printf("Seu IMC e: %f", imc);

    return 0;
}
