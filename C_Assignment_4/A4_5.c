#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int logic(char you, char comp)
{

    if (you == comp)
    {
        return 0;
    }

    if ((you == 'S' && comp == 'R') || (you == 'P' && comp == 'S') || (you == 'R' && comp == 'P'))
    {
        return -1;
    }
    else if ((you == 'R' && comp == 'S') || (you == 'S' && comp == 'P') || (you == 'P' && comp == 'R'))
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 3 + 1;

    if (number == 1)
    {
        comp = 'R';
    }
    else if (number == 2)
    {
        comp = 'S';
    }
    else if (number == 3)
    {
        comp = 'P';
    }
    printf("Hey! Hello! Welcome to my GAMING World !\n");
    printf("Enter the alphabet :- \ni.  'R' for 'Rock'\nii. 'P' for 'Paper'\niii.'S' for 'Scissor' \n");
    scanf("%c", &you);

    int result = logic(you, comp);
    printf("You have chosen %c and your Opponent has chosen %c \n", you, comp);

    if (result == 0 || result == 1 || result == -1)
    {
        printf("The result of the Game is :- \n");
    }

    if (result == 0)
    {
        printf("The game is Draw!!Please replay!");
    }

    else if (result == 1)
    {
        printf("Congratulations ! You won the match..Visit Again!");
    }

    else if (result == -1)
    {
        printf("You lost the match!!Please replay !");
    }
    else
    {
        printf("Invalid Input! Please retry!");
    }
    if (you >= 'a' && you <= 'z')
    {
        printf("\nEnter the letters in Uppercase");
    }
    return 0;
}
