#include <stdio.h>
#define lenght 10
int main()
{
    int A[lenght];
    int B[lenght];
    for (int i = 0; i < lenght; i++)
    {
        printf("Insira o valor %d da matriz A: \n", i);
        scanf("%d", &A[i]);
        B[i] = A[i] * -1;
    }
    for (int i = 0; i < lenght; i++)
    {
        printf("Valor %d da matriz B: %d\n", i, B[i]);
    }
}