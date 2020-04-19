#include <stdio.h>
#include <stdlib.h>

int main()
{
    int     round = 1;
    char    yn;
    int     again = 1;
    int     i;
    int     num;
    int     win;
    int     x;
    int     N;

    printf("** Game Start **\n");
    while(again)
    {
        printf("\n= %d Round Game =\n", round++);
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
        i = 1;
        getchar();
        yn = '\0';
a:
        printf("\nTry more? (y/n) ");
        scanf("%c", &yn);
        if (yn == 'y')
            again = 1;
        else if (yn == 'n')
            again = 0;
        else
            goto a;
    }
    printf("\n** Game End **\n");
    return (0);
}
