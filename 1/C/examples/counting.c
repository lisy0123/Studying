/*
** - Count numbers, spaces, characters in input string and print it.
*/

#include <stdio.h>

int main()
{
    char c;
    int Nnum = 0;
    int Nspace = 0;
    int Nchar = 0;

    printf("String: ");
    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            Nnum++;
        else if (c == ' ' || c == '\t')
            Nspace++;
        else if ((c >='A' && c <= 'Z') ||(c >= 'a' && c <= 'z'))
            Nchar++;
    }
    printf("Numbers: %d\n", Nnum);
    printf("Spaces: %d\n", Nspace);
    printf("Characters: %d", Nchar);
    return (0);
}
