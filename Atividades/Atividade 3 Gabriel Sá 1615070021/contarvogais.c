#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
main()
{
  /*3 - Fazer um programa em C que leia uma frase e imprima somente as vogais.  */
char frase[80];
int cont, cont2;
int tamanho;
printf("Entre com uma frase qualquer\n");
scanf("%c",&frase);
tamanho=strlen(frase);
char final[tamanho];
				 for (cont=0;cont<tamanho;cont++)
				 {
				 if (frase[cont]=='a')
				 {
					final[cont2]='a';
					cont2++;
					}
				 else if (frase[cont]=='e')
				 {
					final[cont2]='e';
					cont2++;
					}
				 else if (frase[cont]=='i')
				 {
					final[cont2]='i';
					cont2++;
					}
				 else if (frase[cont]=='o')
				 {
					final[cont2]='o';
					cont2++;
					}
				 else if (frase[cont]=='u')
				 {
					final[cont2]='u';
				   cont2++;	
				 }
				 }
				 tamanho=strlen(final);

				 for (cont2=0;cont2<tamanho;cont2++)
				 {
				 printf("%c",final[cont2]);
				 }
getch();
}
