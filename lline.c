#include<stdio.h>
void linelencount(char*len)
{
    FILE* lencou=fopen(len,"r");
    int c,line=1,count=1;
    for(;;)
    {
        c = fgetc(lencou);
	   count++;
	if(c=='\n'){
    	printf("%dline length is:%d\n",line,count);
	   count=0;
	  line++;}
        if(c==EOF)
           break;
    }
}
