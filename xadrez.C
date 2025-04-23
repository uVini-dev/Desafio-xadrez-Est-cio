#include <stdio.h>


   void movimentoDireita(int direita){     // movimento de peças para direita

    
      if (direita > 0)  
      {
          printf("Direita\n");    // sentido do movimento
          movimentoDireita(direita - 1);
      }
      
  }
  
  void movimentoEsquerda(int esquerda){     // movimento de peças para esquerda
  
     
      if (esquerda > 0)
      {
          printf("Esquerda\n");    // sentido do movimento
          movimentoEsquerda(esquerda - 1);
      }
  
  }
  
  void movimentoDiagonal(int cima, int direita) {   // movimento de peças para diagonal
      if (cima > direita) {
          return; // caso base: para quando o número de passos for atingido
      }
  
      for (int cima = 0; cima < 1; cima++) { // movimento vertical
          for (int direita = 0; direita < 1; direita++) { // movimento horizontal
              printf("Cima Direita\n");       // sentido do movimento
          }
      }
  
      movimentoDiagonal(cima + 1, direita); // chamada recursiva
  }
  
  
  
  int main(){
  
       //movimento da Torre, move 5 casas a direita, utilizando estrutura de repetição while
     
       
      int quantidadeTorre = 5;  // quantidade de movimentos
   
      printf("\nMovimentos da torre:\n"); 
      movimentoDireita(quantidadeTorre);
  
  
     
     // movimento do Bispo, move 5 casas na diagonal para cima/direita, utilizando estrutura de repetição do-whle
  
      int quantidadeBispo = 5;    // quantidade de movimentos
  
      printf("\nMovimento da peça bispo:\n");
      movimentoDiagonal(1 , quantidadeBispo);
  
  
     // movimento da Rainha, move 8 casas a esquerda, utilizando estrutura de repetição for
    
  
     int quantidadeRainha = 8;  // quantidade de movimentos
   
     printf("\nMovimentos da rainha:\n"); 
     movimentoEsquerda(quantidadeRainha);


   //movimento do Cavalo, move duas casas para baixo e uma para esquerda, utilizando loop aninhado e estruturas de repetição for e while

        printf("\nMovimento da peça cavalo:\n");
        for (int c = 2, y = 1 ; y <= c; y++)   // loop aninhado com multiplas variaveis e condição, e incrementação
        {
         printf("Cima\n");   // movimento inicial
        } printf("Direita\n");  // movimento final
        

 return 0;

}
