#include<stdio.h>
#include<ctype.h>
void alpha(char*rec)
{
FILE *fa=fopen(rec,"r");
char let,alpha=0;
while((let=fgetc(fa))!=EOF)
if((isalpha(let)))
++alpha;
printf("total %d alphabets in this file\n",alpha);
fclose(fa);
}
