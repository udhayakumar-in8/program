#include<ctype.h>
#include<stdio.h>
void spaces(char*rec)
{
FILE *fa=fopen(rec,"r");
char let,space=0;
while((let=fgetc(fa))!=EOF)
if(((let==' ')||(let=='\t')))
++space;
printf("Total %d spaces in this file\n",space);
fclose(fa);
}
