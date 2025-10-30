#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

    // ---------- Início do desafio Tema 4: Mestre ---------- //

    // Movimentação da Torre usando recursividade (5x para a direita):
    void moverTorre(int casas) {
        if(casas > 0) {
            printf("Direita\n");
            moverTorre(casas - 1); // Recursividade
        }
    }
    
    // Movimentação da Rainha usando recursividade (8x casas para a esquerda):
    void moverRainha(int casas) {
        if(casas > 0) {
            printf("Esquerda\n");
            moverRainha(casas - 1); // Recursividade
        }
    }
    
    // Movimentação do cavalo usando loops aninhados (2x para cima e 1x para direita):
    void moverCavalo() {
        for(int j = 0; j < 1; j++) {
            for(int i = 0; i < 2; i++) {
                printf("Cima, ");
            }
            printf("Direita\n");
        }
        
    }
    
    // Movimentação do bispo usando loops aninhados e recursividade (5x cima, direita):
    void moverBispo(int casas) {
        if(casas > 0) {
            for(int j = 1; j > 0; j--) { // loop mais externo responsável pelo movimento vertical
                for(int i = 0; i < 1; i++) { // loop mais interno responsável pelo movimento horizontal
                    printf("Direita, ");
                }
            
                printf("Cima\n");
                moverBispo(casas - 1); // Recursividade
            }
        }
        
    }
    

int main()
{
    // Movimento da Torre:
    printf("\nMovimentação da Torre:\n");
    moverTorre(5);
    
    
    // Movimento da Rainha:
    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);
    
    
    // Movimento do Cavalo:
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();
    
    // Movimento do Bispo:
    printf("\nMovimentação do Bispo:\n");
    moverBispo(5);
    
    
    return 0;
}


