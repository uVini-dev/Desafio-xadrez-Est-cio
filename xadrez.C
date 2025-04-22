#include <stdio.h>
int main(){

   //movimento da Torre, move 5 casas a direita, utilizando estrutura de repetição while

       printf("Movimento da peça torre:\n");
   int t = 1;   // variavel
     while (t <= 5)   // condição para parar de executar o movimento
     {
        printf("Direita\n");  // indica o movimento que a peça irá fazer
        t++;
     } 

   
   // movimento do Bispo, move 5 casas na diagonal para cima/direita, utilizando estrutura de repetição do-whle

        printf("\nMovimento da peça bispo:\n");
    int b = 1;   // variavel
     do
     {
        printf("Cima Direita\n");   // indica o movimento que a peça irá fazer
        b++; 
     } while (b <= 5); // condição para parar de executar o movimento


   // movimento da Rainha, move 8 casas a esquerda, utilizando estrutura de repetição for
        printf("\nMovimento da peça rainha:\n");  
        for(int r = 1; r <= 8; r++)  // variavel, condição, incrementação
     {
            printf("Esquerda\n");  
     }


 return 0;

}
