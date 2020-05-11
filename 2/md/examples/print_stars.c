/*
** - Print stars.
*/

#include <stdio.h>

int main()
{
    int num;
    int i;
    int j;

    printf("Num: ");
    scanf("%d", &num);
    for (i =1; i <= num; i++)
    {
        for(j = 1; j <= i - 1; j++)
            printf(" ");
        printf("*");
        printf("\n");
    }
    num++;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num - i; j++)
            printf(" ");
        printf("*");
        printf("\n");
    }
    return (0);
}
