#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	union u_numeros_inteiros
{
  char  caracter ;
  short int    inteiro_curto ;
  int   inteiro ;
  long int  inteiro_longo ;
} numero ;

int main(int argc, char *argv[]) {
	
	numero a;
	
	  a.caracter = 700 ;
  printf ("caracter : %d\n\n", a.caracter) ;
 
  a.short int = 1 ;
  printf ("short int : %d\n", a.short int) ;
  printf ("caracter : %d\n\n", a.caracter) ;
 
  a.int = 200 ;
  printf ("int: %d\n", a.int) ;
  printf ("short int : %d\n", a.short int) ;
  printf ("caracter : %d\n\n", a.caracter) ;
  
  a.long int = 20000000;
  printf("long int: %ld\n", a.long int);
	printf ("int: %d\n", a.int) ;
  printf ("short int : %d\n", a.short int) ;
  printf ("caracter : %d\n\n", a.caracter) ;

	return 0;
}
