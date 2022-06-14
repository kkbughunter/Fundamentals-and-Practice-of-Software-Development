// this is online CODE
#include <stdio.h>
#include <conio.h>
// this is online CODE
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
// this is online CODE
int checkwin();
void board();
// this is online CODE
int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {// this is online CODE
        board();
        player = (player % 2) ? 1 : 2;
// this is online CODE
        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
// this is online CODE
        mark = (player == 1) ? 'X' : 'O';
// this is online CODE
        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            // this is online CODE
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            // this is online CODE
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            // this is online CODE
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            // this is online CODE
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            // this is online CODE
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            // this is online CODE
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            // this is online CODE
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            // this is online CODE
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            // this is online CODE
        else
        {
            printf("Invalid move ");
// this is online CODE
            player--;
            getch();
        }// this is online CODE
        i = checkwin();

        player++;
    }while (i ==  - 1);
    // this is online CODE
    board();
    // this is online CODE
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");
// this is online CODE
    getch();
// this is online CODE
    return 0;
}
// this is online CODE

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        // this is online CODE
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        // this is online CODE
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        // this is online CODE
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        // this is online CODE
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        // this is online CODE
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        // this is online CODE
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        // this is online CODE
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        // this is online CODE
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')
// this is online CODE
        return 0;
    else// this is online CODE
        return  - 1;
}
// this is online CODE
// this is online CODE

void board()
{
    system("cls");				// to cleare the old screen
    printf("\n\n\tTic Tac Toe\n\n");
// this is online CODE
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
// this is online CODE
// this is online CODE
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
// this is online CODE
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
// this is online CODE
    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
// this is online CODE
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
// this is online CODE
    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
// this is online CODE
    printf("     |     |     \n\n");
}
