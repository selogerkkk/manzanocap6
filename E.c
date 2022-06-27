#include <stdio.h>

int main()
{

    int fat[15], i, vet[15];

    for (i = 0; i < 15; i++)
    {
        printf("Insira um numero:\n");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 15; i++)
    {
        for (fat[i] = 1; vet[i] > 1; vet[i]--)
        {
            fat[i] *= vet[i];
        }
        {
            printf("\n\n");
        }
        printf("%d", fat[i]);
    }

    return 0;
}