#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE *fs, *ft;
	char ch;
	if(argc != 3)
	{
		printf("Invalid number of arguments!");
		return 0;
	}
	fs = fopen(argv[1], "r");
	ft = fopen(argv[2], "w");
	while(1)
	{
		ch = fgetc(fs);
		if(ch == EOF)
			break;
		fputc(ch, ft);
	}
	fclose(fs);
	fclose(ft);
	return 0;
}