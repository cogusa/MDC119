#include <stdio.h>       

#define ALTURA 5
#define LARGURA 5

int main()
{
   int x;                            /* numero da coluna */
   int y;                            /* numero da linha */
   int matriz [ALTURA] [LARGURA]; /* array 2-D [num_lins, num_cols] */
 

   /* preenche a matriz com zeros  */
   y = 0;
   while(y < ALTURA)
   {
     x = 0;
     while(x < LARGURA)
     {
        matriz[y][x] = 0;
        x+=1;
     }
     y+=1;
   }

   /* Imprime a matriz com zeros e a coordenada escolhida com 1 */

   printf("\nEntre coordenadas na forma y,x (2,4).\n");
   printf("Use valores negativos para sair do programa.\n");

   printf("Coordenadas: ");
   scanf("%d,%d", &y, &x);    

   while (x >= 0 && y >= 0)
   {
      matriz[y][x] = 1;    /* coloca 1 no elemento escolhido */

      y = 0;
      while (y < ALTURA)   /* imprime o array todo */
      {
        x = 0;
        while (x < LARGURA)
        {
             printf("%d ", matriz[y][x] );
             x += 1;
        }
        printf("\n\n");
        y += 1;
      }

      printf("\n");
      printf("Coordenadas: ");
      scanf("%d,%d", &y, &x);    
   }
}
