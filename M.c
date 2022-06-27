#include <stdio.h>
#define lenght 10
int main()
{
    int num;
    int A[lenght];
    printf("Insira o valor para ser calculado: ");
    scanf("%d", &num);

    for (int i = 0; i < lenght; i++)
    {
        A[i] = num * i;
    }
    printf("Resultado da matriz:\n");
    for (int i = 0; i < lenght; i++)
    {
        printf("%d * %d = %d\n", num, i, A[i]);
    }
}