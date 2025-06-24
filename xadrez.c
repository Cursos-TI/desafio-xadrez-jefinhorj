#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
  // Torre (for)
  printf("Movimento da Torre (5 casas para a direita):\n");
  for (int i = 1; i <= 5; i++) {
    printf("Torre: Movendo-se para a direita %d casa(s)\n", i);
  }

  // Bispo (while)
  printf("\nMovimento do Bispo (5 casas para cima e direita):\n");
  int j = 1;
  while (j <= 5) {
    printf("Bispo: Movendo-se para Cima, Direita %d casa(s)\n", j);
    j++;
  }

  // Rainha (do-while)
  printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
  int k = 1;
  do {
    printf("Rainha: Movendo-se para a esquerda %d casa(s)\n", k);
    k++;
  } while (k <= 8);

  return 0;
}