#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int    yn;
    int     num;
    int     win;
    int     x;
    int     N;
    int     sub;
    int     round = 1;
    int     again = 1;

    printf("** Game Start **\n");
    while(again)
    {
        printf("\n= %d Round Game =\n", round++);
		srand((unsigned int)time(NULL));
        num = rand() % 100;
        win = 0;
        for (x = 0; x <= 6; x++)
        {
            printf("Write a number between 0 - 99: ");
            scanf("%d",&N);
            if (N == num)
            {
                win = 1;
                break;
            }
            else if (N < num)
                printf("Bigger than %d\n", N);
            else
                printf("Smaller than %d\n", N);
        }
        if (win)
            printf("\nYOU WIN!\n");
        else
            printf("\nYOU LOSE! The answer was %d.\n", num);
        sub = 1;
        while (sub)
        {
            printf("\nTry more? (1: YES / 2: NO) ");
            scanf("%d", &yn);
            if (yn == 1)
            {
                again = 1;
                sub = 0;
            }
            else if (yn == 2)
            {
                again = 0;
                sub = 0;
            }
        }
    }
    printf("\n** Game End **\n");
    return (0);
}
