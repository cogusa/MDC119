
#include "stdio.h"
 

void main()
{
  // Declaração de variáveis.
  int a, b, auxiliar, i, n;
 
  a = 0;
  b = 1;
 
  // A função printf() escreve na tela.
  printf("Digite um numero da serie de Fibonacci: ");
  // A função scanf obtém um valor digitado.
  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);
 
  // Com a estrutura de controle for() gero a sequência.
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
    // Imprimo o número na tela.
    printf("%d\n", auxiliar);
  }
}
