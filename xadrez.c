#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int opcoes, direita, esquerda, superiorDireita, baixo;

    //Título do jogo de Xadrez
    printf("### JOGO DE XADREZ ###\n\n");
    printf("Bem vindo ao jogo de xadrez, escolha uma das\nopções do menu abaixo para movimentar suas peças.\n");

    do{
        // Inicia o menu do jogo de xadrez
        printf("\nMenu:\n");
        printf("1. Bispo \n");
        printf("2. Torre \n");
        printf("3. Rainha \n");
        printf("4. Cavalo (Início: vertical)\n");
        printf("5. Cavalo (Início: horizontal)\n");
        printf("6. Regras\n");
        printf("7. Sair do jogo\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcoes);

        switch(opcoes){
            
            // Implementação de Movimentação do Bispo
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal (5 casas superior direita).          
            case 1:
                for (superiorDireita = 1; superiorDireita <= 5; superiorDireita++) {
                    printf("Você movimentou o bispo para a diagonal superior direita %d casa(s)\n", superiorDireita);
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

            // Nível Aventureiro - Movimentação do Cavalo
            // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
            // Um loop pode representar a movimentação horizontal e outro vertical.
            //Caso 4 - Movimento do cavalo iniciando na vertical (tipo do loop: for)
            case 4:
                for(esquerda = 0; esquerda < 1; esquerda++)
                {
                    for(baixo = 0; baixo < 2; baixo++)
                    {
                        printf("Você movimentou o cavalo para baixo\n");
                    }

                    printf("Você movimentou o cavalo para a esquerda\n");
                }
                break;

            //Caso 5 - Movimento do cavalo iniciando na horizontal (tipo do loop: while)
            case 5:
                esquerda = 0;
                baixo = 0;

                while(baixo < 2)
                {
                    while(esquerda < 1)
                    {
                          printf("Você movimentou o seu cavalo para a esquerda\n");
                          esquerda++;
                    }
                    printf("Você movimentou o seu cavalo para baixo\n");
                    baixo++;
                }
                break;
            
            //Regras do jogo - Movimento das peças
            case 6:
                printf("\n###Regras do jogo - Movimento das peças###\n\n");
                printf("- Selecione um número de 1 a 5 para movimentar as peças;\n");
                printf("- O bispo movimenta 5 casas na diagonal superior direita;\n");
                printf("- A torre se movimenta 5 casas para a direita;\n");
                printf("- A rainha se movimenta 5 casas para a esquerda;\n");
                printf("- O cavalo se movimenta no formato de L no sentido horizontal ou vertical;\n");
                printf("- Para sair do jogo você pode digitar o número 7 no menu.\n");
                break;
            
            default:
                printf("\n");
                break;
        }

    } while (opcoes != 7);

        printf("Que pena! Você saiu do jogo...\n\n");




    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
