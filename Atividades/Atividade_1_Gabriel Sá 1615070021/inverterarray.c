#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int Numeros[5];
    for (a = 0;a<5;a++)
    {
    printf("Digite um numero\n");
    scanf("%d", &Numeros[a]);
    printf("\n");
    fflush(stdin);
    }
    for (b = 4; b >= 0; b--)
    {
        printf("%d\n", Numeros[b]);
    }
    return 0;
}
