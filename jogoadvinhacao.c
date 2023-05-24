/*
ler tentativas do usuario;
sem limite de chances;
colocar contador de alternativas;
imprimir erros e dizer se e maior ou menor do que a escolha certa;
imprimirir acerto e total de tentativas.
*/
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int chute=0;
    int i=0;
    int segundos= time(0);
    srand (segundos);
    int gerador = rand();
    int numeroSecreto= abs(gerador % 100); //gera valores de 0 a 99
    float pontos=1000;
    int nivel=0;
    int tentativas=0;
    int resultado=0;

    printf("          P  /_\\ P                              \n");
    printf("         /_\\_|_|_/_\\                               \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao        \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao!    \n");
    printf("    |" "  |  |_|  |"  " |                            \n");
    printf("    |_____| ' _ ' |_____|                            \n");
    printf("          \\__|_|__/                                 \n");
    printf("\n\n\n");


    printf("Escolha o nivel: (1) Facil (2) Medio (3) Dificil\n");
        scanf("%d", &nivel);

    switch(nivel)
        {
            case 1:
                {
                    tentativas=20;
                    break;
                }
            case 2:
                {
                    tentativas=15;
                    break;
                }
            default:
                {
                    tentativas=6;
                }
        }

    printf("Digite seu chute:\n");
    
    for(int x=1; x<=tentativas; x++)
        {
            scanf("%d", &chute);
            printf("Tentativa %d\n", x);

            if(chute<0)
            {
                printf("Digite um valor positivo\n");
                continue;
            }

            else if (chute==numeroSecreto)
                {
                    i++;
                    resultado=1;
                    break;
                }
            
            else if(chute<numeroSecreto)
                {
                    printf("Voce errou! seu numero e menor.\n");
                    i++;

                }

            else
                {
                    printf("Voce errou! seu numero e maior.\n");
                    i++;
                }
         float pontuacaoPerdida=abs(numeroSecreto-chute)/(float)2;
         pontos=pontos - pontuacaoPerdida;
        }
    
    if(resultado==0)
        {
            printf("Voce perdeu! Tente de novo!\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
            pontos=0;
        }
    
    else
        {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Parabens! Voce ganhou!\n");
        }

    printf("Numero de tentativas: %d\n", i);
    printf("Pontuacao: %f\n", pontos);
    printf("Fim de jogo!\n");

    return 0;
}