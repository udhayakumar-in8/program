#include<ctype.h>
#include<stdio.h>
void special(char*rec)
{
	FILE *fa=fopen(rec,"r");
	char let,spl=0;
	while((let=fgetc(fa))!=EOF){
		if((isalpha((let))||(isdigit(let))))
		;
		else
		++spl;
	}
	printf("total %d special in this file\n",spl);
fclose(fa);
}
