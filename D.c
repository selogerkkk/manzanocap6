#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[15];
    int B[15];

    for (int i = 0; i < 15; i++)
    {
        printf("Insira o valor %d: \n", i);
        scanf("%d", &A[i]);
        B[i] = A[i] * A[i];
    }
    printf("Valores: \n");
    for (int i = 0; i < 15; i++)
    {
        printf("Valor %d de A: %d\n", i, A[i]);
        printf("O quadrado do valor %d de A: %d\n", i, B[i]);
    }
}