#include <stdio.h>

int main()
{
    int A[20];
    int B[30];
    int C[50];

    for (int i = 0; i < 20; i++)
    {
        printf("Insira o valor %d de A: \n", i);
        scanf("%d", &A[i]);
        C[i] = A[i];
    }

    for (int i = 20; i < 50; i++)
    {
        printf("Insira o valor %d de B: \n", i);
        scanf("%d", &B[i]);
        C[i] = B[i];
    }

    printf("Valores de C: \n");
    for (int i = 0; i < 50; i++)
    {
        printf("Valor %d: %d\n", i, C[i]);
    }
}