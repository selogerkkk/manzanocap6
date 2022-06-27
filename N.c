#include <stdio.h>
#define LENGHT 20
int main()
{
    float menor, maior = 0, media = 0;
    float A[LENGHT];

    for (int i = 0; i < LENGHT; i++)
    {
        printf("Insira o valor %d da matriz A: ", i);
        scanf("%f", &A[i]);
    }
    for (int i = 0; i < LENGHT; i++)
    {
        if (i == 0)
        {
            maior = A[i];
            menor = A[i];
        }

        if (A[i] > maior)
        {
            maior = A[i];
        }
        else
        {
            menor = A[i];
        }
    }

    for (int i = 0; i < LENGHT; i++)
    {
        media = (media + A[i]);
    }
    media = media / LENGHT;
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);
}