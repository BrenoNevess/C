#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, sub = 0, adic = 0, mult = 0, resto = 0;
    float div = 0;
    printf ("\n Escreva dois valores:");
    scanf ("%d", &x);
    scanf ("%d", &y);

    sub = x - y;
    adic = x + y;
    mult = x*y;
    div = x/y;
    resto = x%y;

    printf ("\n %d - %d = %d", x, y, sub);
    printf ("\n %d + %d = %d", x, y, adic);
    printf ("\n %d * %d = %d");
    printf ("\n %d/%d = %d", x, y, div);
    printf ("\n %d %% %d = %d", x, y, resto);

    return 0;
}
