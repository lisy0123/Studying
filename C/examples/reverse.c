#include <stdio.h>
#define MAXFILENAME 50

int main()
{
	char fname[MAXFILENAME];
	char fn[MAXFILENAME];
	int c;
	FILE *fp = NULL;

	fprintf(stdout, "File Name: ");
	scanf("%s", fname);
	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("No File");
		return (0);
	}
	printf("%s: ", fname);
	fscanf(fp, "%s", fn);
	printf("%s", fn);
	fseek(fp, 0, SEEK_END);
	if (ftell(fp) == 0)
		return (0);
	fseek(fp, -1, SEEK_CUR);
	while (1)
	{
		c = getc(fp);
		putchar(c);
		if (ftell(fp) == 1)
			break ;
		fseek(fp, -2, SEEK_CUR);
	}
	fclose(fp);
	return (0);
}
