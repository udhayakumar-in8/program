#include<stdio.h>
void lines(char*rec)
{
	FILE *fa=fopen(rec,"r");
	char let,lines=0;
	while((let=fgetc(fa))!=EOF)
		if(let=='\n')
		++lines;
		printf("total %d lines in this file\n",lines);
fclose(fa);
}
