#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // ---------- Início do desafio Tema 4: Novato ---------- //
    
    // Movimentação da Torre usando a estrutura for (5 casas para a direita):
    
    printf("\nMovimentação da Torre:\n");
    
    for(int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    
    // Movimentação do bispo usando a estrutura while (cinco casas na diagonal para cima e à direita):
    
    int x = 0;
    
    printf("\nMovimentação do Bispo:\n");
    
    while(x < 5) {
        printf("Cima, Direita\n");
        x++;
    }
    
    // Movimentação da Rainha usando a estrutura do-while (oito casas para a esquerda):
    
    int r = 0; 
    printf("\nMovimentação da Rainha:\n");
    
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    return 0;
}
