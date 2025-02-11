#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int opcoes, direita, esquerda, superiorDireita;

    //Título do jogo de Xadrez
    printf("### JOGO DE XADREZ ###\n\n");
    printf("Bem vindo ao jogo de xadrez, escolha uma das\nopções do menu abaixo para movimentar suas peças.\n");

    do{
        // Inicia o menu do jogo de xadrez
        printf("\nMenu:\n");
        printf("1. Bispo \n");
        printf("2. Torre \n");
        printf("3. Rainha \n");
        printf("4. Sair do jogo.\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcoes);

        switch(opcoes){
            
            // Implementação de Movimentação do Bispo
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal (5 casas superior direita).          
            case 1:
                for (superiorDireita = 1; superiorDireita <= 5; superiorDireita++) {
                    printf("Você movimentou o bispo para a Superior Direita %d casa(s)\n", superiorDireita);
                }
                break;

            // Implementação de Movimentação da Torre
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita (5 casas).
            case 2:
                for (direita = 1; direita <= 5; direita++) {
                    printf("Você movimentou a torre para a direita %d casa(s)\n", direita);
                }
                break;

            // Implementação de Movimentação da Rainha
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda (8 casas).
            case 3:
                for (esquerda = 1; esquerda <= 8; esquerda++){
                    printf("Você movimentou a rainha para a esquerda %d casa(s)\n", esquerda);
                }
                break;
            
            default:
                printf("\n");
                break;
        }

    } while (opcoes != 4);

        printf("Que pena! Você saiu do jogo...\n\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
