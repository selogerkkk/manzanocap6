#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10][100] = {};
    for (int i = 0; i < 10; i++)
    {

        printf("Insira o nome %d: \n", i);
        scanf("%s", &nome[i]);
    }
    printf("Nomes preenchidos:\n");
    for (int i = 0; i < 10; i++)
    {

        printf("Nome %d: %s \n", i, nome[i]);
    }
}