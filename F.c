#include <stdio.h>

int main()
{
    int A[15];
    int B[15];
    int C[30];

    for (int i = 0; i < 15; i++)
    {
        printf("Insira o valor %d de A: \n", i);
        scanf("%d", &A[i]);
        C[i] = A[i];
    }

    for (int i = 15; i < 30; i++)
    {
        printf("Insira o valor %d de B: \n", i);
        scanf("%d", &B[i]);
        C[i] = B[i];
    }

    printf("Valores de C: \n");
    for (int i = 0; i < 30; i++)
    {
        printf("Valor %d: %d\n", i, C[i]);
    }
}