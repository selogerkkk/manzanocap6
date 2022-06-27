#include <stdio.h>
#define LENGHT 20
int main()
{
  int A[LENGHT];
  int B[LENGHT];

  for (int i = 0; i < LENGHT; i++)
  {
    int acc = 0;

    printf("Digite o %d° número da matriz A: ", i + 1);
    scanf("%d", &A[i]);

    for (int j = i; j > -1; j--)
    {
      acc += A[j];
    }

    B[i] = acc;
  }

  for (int i = 0; i < LENGHT; i++)
  {
    printf("%d\n", B[i]);
  }

  return 0;
}