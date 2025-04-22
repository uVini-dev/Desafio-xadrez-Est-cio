#include <stdio.h>
int main(){

   //movimento da Torre, move 5 casas a direita, utilizando estrutura de repetição while

       printf("Movimento da peça torre:\n");
   int t = 1;   // variavel
     while (t <= 5)   // condição para parar de executar o movimento
     {
        printf("Direita\n");  // indica o movimento que a peça irá fazer
        t++;  // incrementação
     } 

   
   // movimento do Bispo, move 5 casas na diagonal para cima/direita, utilizando estrutura de repetição do-whle

        printf("\nMovimento da peça bispo:\n");
    int b = 1;   // variavel
     do
     {
        printf("Cima Direita\n");   // indica o movimento que a peça irá fazer
        b++;  // incrementação
     } while (b <= 5); // condição para parar de executar o movimento


   // movimento da Rainha, move 8 casas a esquerda, utilizando estrutura de repetição for
        printf("\nMovimento da peça rainha:\n");  
        for(int r = 1; r <= 8; r++)  // variavel, condição, incrementação
     {
            printf("Esquerda\n");  
     }


   //movimento do Cavalo, move duas casas para baixo e uma para esquerda, utilizando loop aninhado e estruturas de repetição for e while

        printf("\nMovimento da peça cavalo:\n");
      int c = 1;   // variavel 
       while (c <= 1)       // estrutura de repetição externa com condição
       {
         for (int y = 1; y <= 2; y++)   // estrutura de repetição interna (inclui variavel, condição e incrementação)
         {
            printf("Baixo\n");    // movimentos da estrutura interna
         }
         printf("Esquerda\n");   // movimento da estrutura externa
         c++;  // incrementação da estrutura externa
       }  
       


 return 0;

}
