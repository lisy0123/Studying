/*
** - Print alphabet.
*/

#include <stdio.h>

int main()
{
    int i;
    int j;
    int alpha;

    for (i = 1; i <= 26; i++)
    {
        alpha = 'A';
        for (j = 1; j <= 26 - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
        {
            printf("%c",alpha);
            alpha++;
        }
        printf("\n");
    }
    return (0);
}
