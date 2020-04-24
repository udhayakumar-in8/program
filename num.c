#include<stdio.h>
#include<ctype.h>
void numeric(char*rec)
{
FILE *fa=fopen(rec,"r");
char let,digit=0;
while((let=fgetc(fa))!=EOF)
if((isdigit(let)))
++digit;
printf("total %d digits in this file\n",digit);
fclose(fa);
}
