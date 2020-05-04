#include <stdio.h>

int main ()
{
    int res;

    printf("4*8/16 = "); //2^(2+3-4)
    res = 4 << 3 >> 4;
    printf("%d", res);
    return (0);
}
