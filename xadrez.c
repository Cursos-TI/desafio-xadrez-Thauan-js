#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("Movendo a torre...\n");
//Parte que move a torre
    for (int torre = 0; torre < 5; torre++){
        printf("Direita\n");
    }

    printf("Movendo o bispo...\n");
//Parte que move o bipo
    for (int bispo = 0; bispo < 5; bispo++){
        printf("Direita\n"), printf("Cima\n");
    }

    printf("Movendo a rainha...\n");
//Parte que move a rainha
    for (int rainha = 0; rainha < 8; rainha++){
        printf("Esquerda\n");
    }
    
// Parte que move o cavalo
    printf("Movendo o cavalo...\n");
    int movimentos = 1;

    while (movimentos <= 1) { 
        
        for (int i = 0; i < 2; i++) { 
            printf("Baixo\n");
        }
        printf("Esquerda\n");

        movimentos++; 
    }

    return 0;
}
