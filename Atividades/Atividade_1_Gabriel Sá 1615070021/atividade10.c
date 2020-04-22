#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

struct Funcionario{
          char nome[20];
          char admissao[20];
          float salario;
		  float altura;
		  float IMC;
};

          struct Funcionario cad_Funcionario[100];

float calculaimc(float p, float a){
    float resultado = p / (a*a);
    return resultado;
}

int main (){
	int opcao, i, l;
	setlocale(LC_ALL, "Portuguese");

        for (i = 1; i <=20;){
            printf("\n\nCadastro dos Funcionarios: \n");
            printf("Digite o numero de uma das opções: \n");
            printf("1- Cadastrar Funcionario \n");
            printf("2- Listar Funcionario \n");
            printf("3- Apagar Funcionario \n");
            printf("0- Sair \n");
            scanf("%d", &opcao);

            switch(opcao) {

            case 1:

                    fflush(stdin);
                    printf ("\n Nome do funcionario:");
                    scanf ("%s", &cad_Funcionario[i].nome);
                    fflush(stdin);
                    printf ("\n data de entrada do funcionario:");
                    scanf ("%s", &cad_Funcionario[i].admissao);
                    fflush(stdin);
                    printf ("\n salario do funcionario: ");
                    scanf ("%f", &cad_Funcionario[i].salario);
                    fflush(stdin);
                    printf ("\n Altura do funcionario: ");
                    scanf ("%f", &cad_Funcionario[i].altura);
                    fflush(stdin);
                    i++;
                break;
            case 2:
                for (l = 1; l <=20; l++) {
                    if(l < i){
                        printf("\n\nNome: %s", &cad_Funcionario[l].nome);
                        printf("\nsalario: %s", &cad_Funcionario[l].salario);
                        printf("\nadmissao: %1.2f", &cad_Funcionario[l].admissao);
                        printf("\nAltura: %1.2f", &cad_Funcionario[l].altura);
                    }
                    else{
                        l = 20;
                    }
                }
                break;
            case 3 :
                break;
                }
                break;
            default:
                printf ("Opção invalida\n");
                break;
        }
	}

	return 0;
}
