#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[20];
    int B[20];
    int C[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Insira o vetor %d de A: \n", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        printf("Insira o vetor %d de B: \n", i);
        scanf("%d", &B[i]);
        C[i] = A[i] - B[i];
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", C[i]);
    }
}