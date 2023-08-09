#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Play!\n");

    // Estrutura de dados
    char jogo[3][3];
    int coluna,linha,jogador = 1,ganhu =0,jogadas=0,op;
    do
    {
        jogador = 1;
        ganhou = 0;
        jogadas =0;

        // Como inicializar a estrutura de dados
        for(int l=0; l<3; l++)
        {
            for(int c=0; c<3; c++)
            {
                jogo[l][c] = ' ';
            }
        }
        do
        {
            // imprimir jogo
            printf("\n\n\t 0   1   2\n");
            for(int l=0; l<3; l++)
            {
                for(int c =0; c<3; c++)
                {
                    if(c==0)
                    {
                        printf("\t");
                    }
                    printf(" %c ", jogo[l][c]);
                    if(c<2)
                    {
                        printf("|");
                    }
                    if(c==2)
                    {
                        printf("  %d",l);
                    }
                }
                if(l<2)
                {
                    printf("\n\t--------");
                }
                printf("\n")
            }


            // Ler coordenadas
            do
            {
                printf("Linha e coluna: ");
                scanf("%d%d",&linha,&coluna);
            }
            while(linha<0 || linha>2 || coluna<0 ||coluna>2 || jogo[linha][coluna] != ' ');
            jogadas++;

            // Salvar coordenadas
            if(jogador == 1)
            {
                jogo[linha][coluna] = 'o';
                jogador++;
            }
            else
            {
                jogo[linha][coluna] = 'X'
                                      jogador = 1;
            }


            // alguem  ganhou por linha
            if(jogo[0][0]== 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
                    jogo[1][0]== 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
                    jogo[2][0]== 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O' )
            {
                printf("\nPlay 1!\n");
                ganhu++;
            }

            if(jogo[0][0]== 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
                    jogo[1][0]== 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
                    jogo[2][0]== 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X' )
            {
                printf("\nPlay 2!\n");
                ganhu++;
            }
            // alguem ganhou po coluna
            if(jogo[0][0]=='O' && jogo[1][0] 'O'&& jogo[2][0]='O'
                    jogo[0][1]=='O' && jogo[1][1] 'O'&& jogo[2][1]='O'
                            jogo[0][2]=='O' && jogo[1][2] 'O'&& jogo[2][2]='O')
            {
                printf("\nplay 1\n");
                ganhu++;
            }

            if(jogo[0][0]=='X' && jogo[1][0] 'X'&& jogo[2][0]='X'
                    jogo[0][1]=='X' && jogo[1][1] 'X'&& jogo[2][1]='X'
                            jogo[0][2]=='X' && jogo[1][2] 'X'&& jogo[2][2]='X')
            {
                printf("\nplay 2\n");
                ganhu++;
            }
            // alguem ganhou na diagonal principal
            if(jogo[0][0] == 'O' &&jogo[1][1] == 'O' jogo[2][2] == 'O')
            {
                printf("\nplay 1\n");
                ganhu++;
            }
            if(jogo[0][0] == 'X' &&jogo[1][1] == 'X' jogo[2][2] == 'X')
            {
                printf("\nplay 2\n");
                ganhu++;
            }
            // alguem ganhou na diagonal secundaria
            if(jogo[0][2] == 'O' &&jogo[1][1] == 'O' jogo[2][0] == 'O')
            {
                printf("\nplay 1\n");
                ganhu++;
            }
            if(jogo[0][2] == 'X' &&jogo[1][1] == 'X' jogo[2][0] == 'X')
            {
                printf("\nplay 1\n");
                ganhu++;
            }



        }
        while(ganhou==0&& jogadas<9);

   if(ganhu == 0){
    printf("kkkk");
   }
    printf("1");
    scanf("%d",&op); }
    while(op == 1);


    return 0;
}
