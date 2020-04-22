#include "stdio.h"
#include "stdbool.h"
 
void main()
{
	int ano;
	bool bissexto;
 
	// A fun��o printf() escreve na tela.
	printf("Digite o ano: ");
 
	// A fun��o scanf obt�m o valor digitado.
	scanf("%d", &ano);
 
	if (ano % 400 == 0) {
		bissexto = true;		
	}
	else if ((ano % 4 == 0) && (ano % 100 != 0)) {
		bissexto = true;		
	}
	else {
		bissexto = false;
	}
 
	if (bissexto == true) {
		printf("O ano eh bissexto!");
	} else {
		printf("O ano nao eh bissexto!");
	}
}
