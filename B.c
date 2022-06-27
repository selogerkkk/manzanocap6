#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[8];
    int B[8];
    for (int i = 0; i < 8; i++)
    {
        printf("Insira o valor %d: ", i);
        scanf("%d", &A[i]);

        B[i] = (A[i]) * 3;
    }
    for (int i = 0; i < 8; i++)
    {

        printf("%d\n", B[i]);
    }
}