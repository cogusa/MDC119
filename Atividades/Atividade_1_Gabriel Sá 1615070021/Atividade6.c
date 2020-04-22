#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A[10],cont,comum,z=0;
	for(cont=0;cont<10;cont++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &A[cont]);
	}
	
	for(cont=0;cont<10;cont++){
		for(comum=0;comum<10;comum++){
			if(A[cont] == A[comum]){
				z++;
			}
		}
		printf("O numero %d apareceu %d vezes", A[cont],z);
		z=0;
		getch();
	}
	getch();
	
	
	
	
	return 0;
}
