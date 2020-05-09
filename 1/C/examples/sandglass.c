#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i;
	int j;
	int num;
	int **a;

	printf("Size: ");
	scanf("%d", &i);
	if (i % 2 == 0)
	{
		printf("Error");
		return(0);
	}
	j = i / 2;
	num = 1;
	printf("\n");
	a = (int **)malloc(sizeof(int *) * i);
	for (int x = 0; x < i; x++)
		a[x] = (int *)malloc(sizeof(int) * i);
	for (int row = 0; row < i; row++)
	{
		for (int col = 0; col < i; col++)
		{
			if (row > col && row < i - j)
				printf("%3d ", a[row][col]);
			else if (col + row >= i && row < i - j)
				printf("%3d ", a[row][col]);
			else if (row == j && row != col)
				printf("%3d ", a[row][col]);
			else if (col + row < i - 1 && row > j)
				printf("%3d ", a[row][col]);
			else if (row < col && row > j)
				printf("%3d ", a[row][col]);
			else
			{
				a[row][col] = num;
				printf("%3d ", a[row][col]);
				num++;
			}
		}
		printf("\n");
	}
	return (0);
}
