#include <stdio.h>
#include <stdlib.h>

int caller(void);
char matrix[3][3];
void ini_matrix(void);
void get_player_move(void);
void get_match_player(void);
void get_computer_move(void);
void display_matrix(void);
void clearscreen(void);
void winner(void);
void loser(void);
void loser2(void);
char carry_on_play(void);
char check(void);

int caller(void)
{
    int op1;

    puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\tSEJA BEM VINDO AO JOGO DA VELHA!!\n  UM JOGO DESENVOLVIDO E APRIMORADO POR HITO 0/1.\n  DIVERTA-SE ENQUANTO JOGA, NÃO FICA VICIADO, :D!");
    puts("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    puts("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+ Opção 1: Jogar contra o computador;\n+ Opção 2: Jogar contra um amigo;\n+ Opção 3: Sair do jogo!");
    puts("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\nEscolha uma opção -> ");
    scanf("%d", &op1);
    clearscreen();
    return op1;
}

//Inicia a matrix
void ini_matrix(void)
{
    puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\tSEJA BEM VINDO AO JOGO DA VELHA!!\n  UM JOGO DESENVOLVIDO E APRIMORADO POR HITO 0/1.\n  DIVERTA-SE ENQUANTO JOGA, NÃO FICA VICIADO, :D!\n");
    puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    register int lin, colun;
    for (lin = 0; lin < 3; lin++)
        for (colun = 0; colun < 3; colun++)
            matrix[lin][colun] = ' ';
}

//Eu jogo
void get_player_move(void)
{
    int x, y;

    printf("Digite as coordenadas da linha......: ");
    scanf("%d", &x);
    printf("\nDigite as coordenadas da coluna do X: ");
    scanf("%d", &y);
    printf("\n\n");
    //system("clear || cls");
    x--;
    y--;
    if (matrix[x][y] != ' ')
    {
        printf("Posição inválida. Tenta novamente!\n");
        get_player_move();
    }
    else
        matrix[x][y] = 'X';
}

//O outro jogador
void get_match_player(void)
{
    int x, v;

    printf("Digite as coordenadas da linha......: ");
    scanf("%d", &x);
    printf("Digite as coordenadas da coluna do V: ");
    scanf("%d", &v);
    printf("\n\n");
    //system("clear || cls");
    x--;
    v--;
    if (matrix[x][v] != ' ')
    {
        printf("Posição inválida. Tenta novamente!\n");
        get_match_player();
    }
    else
        matrix[x][v] = 'V';
}

//O computador joga
void get_computer_move(void)
{
    register int lin, colun;

    for (lin = 0; lin < 3; lin++)
    {
        for (colun = 0; colun < 3; colun++)
            if (matrix[lin][colun] == ' ')
                break;
        if (matrix[lin][colun] == ' ')
            break;
    }

    if (lin * colun == 9)
    {
        printf("Empate!");
        exit(1);
    }
    else
        matrix[lin][colun] = 'O';
}

//Mostrar a matrix na tela
void display_matrix(void)
{
    register int t;

    for (t = 0; t < 3; t++)
    {
        printf(" %c   %c   %c", matrix[t][0], matrix[t][1], matrix[t][2]);
        if (t != 2)
            printf("\n---|---|---|\n");
    }
    printf("\n\n");
}

//Verifica se há um vencedor

char check(void)
{
    register int lin, colun;

    //Verificar as linhas
    for (lin = 0; lin < 3; lin++)
        if (matrix[lin][0] == matrix[lin][1] && matrix[lin][0] == matrix[lin][2])
            return matrix[lin][0];

    //Veficar as colunas
    for (colun = 0; colun < 3; colun++)
        if (matrix[0][colun] == matrix[1][colun] && matrix[0][colun] == matrix[2][colun])
            return matrix[0][colun];

    //Verificar as diagonais
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
        return matrix[0][0];
    if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
        return matrix[0][2];

    return ' ';
}

//Continuar a jogar
char carry_on_play(void)
{

    printf("Deseja continuar a jogar?\n----> ");
    char cont = getchar();
    if(cont == 'S' || cont == 's')
        return cont;
    else if(cont == 'N' || cont == 'n')
        return cont;
}
//Vencedor!
void winner(void)
{
    puts("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\t\tVocê ganhou! Parabéns.\n");
    puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
}

//Perdedor!
void loser(void)
{
    puts("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\tVocê perdeu! Que triste, mais sorte na próxima!");
    puts("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
}

void loser2(void)
{
    puts("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\tSeu adversário levou o melhor sobre você hoje!");
    puts("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
}

//Limpar a tela
void clearscreen(void)
{
    system("clear || cls");
}