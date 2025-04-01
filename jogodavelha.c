#include <stdio.h>
#include <stdlib.h>
//#include <confio.h>
#include "jogar.h"

int main(void)
{
    char done;
    char continuar = carry_on_play();
    clearscreen();
    int op = caller();
    
    switch (op)
    {
    case 1:
        done = ' ';
        ini_matrix();
        do
        {
            display_matrix();
            get_player_move();
            //Verifica se há vencedor
            done = check();
            if (done != ' ')
                break; //Há vencedor!
            get_computer_move();
            //Verifica se há vencedor
            done = check();

        } while (done = ' ');

        if (done == 'X')
            winner();

        else
            loser();
        break;
        
    case 2:
        done = ' ';
        ini_matrix();
        do
        {
            display_matrix();
            get_player_move();
            //Verifica se há vencedor
            done = check();
            if (done != ' ')
                break; //Há vencedor!
            get_match_player();
            //Verifica se há vencedor
            done = check();

        } while (done = ' ');

        if (done == 'X')
            winner();
        else if (done == 'V')
            loser2();
        break;
        
    case 3:
        printf("Jogo encerrado!");
        exit(1);
        break;
        
        default:
            printf("Opção inválida!");
            break;
    }
    
    return 0;
}
