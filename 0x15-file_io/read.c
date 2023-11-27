#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp = fopen("test.txt", "r");

	if (fp == NULL)
	{
		printf("Unable to open file!\n");
		exit(1);
	}

	char *line = NULL;
	size_t len = 0;

	while (getline(&line, &len, fp) != -1)
	{
		fputs(line, stdout);
		fputs("|*\n", stdout);
	}

	fclose(fp);
	free(line);

	return (0);
}
