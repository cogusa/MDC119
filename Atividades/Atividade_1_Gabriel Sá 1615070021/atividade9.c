#include<stdio.h>
#include<math.h>
 
int main ()
{
    char marca;
    int ano;
    float valor, valor_depreciado;
    int carro_s;
    
 	printf("Digite o ano do carro: ");
    scanf("%d",&ano);
    printf("Digite o valor do carro: ");
    scanf("%f", &valor);
    
    valor_depreciado = valor - (2020 - ano)*0.01*valor;
 
	printf("O valor depreciado eh: %f", &valor_depreciado);
	
    return 0;
}
