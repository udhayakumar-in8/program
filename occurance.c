#include<stdio.h>
#include<string.h>
int countoccur(char *rec, const char *word)
{

    FILE* fptr=fopen(rec,"r");
    char str[100];
    char *pos;
    int index, count;
    count = 0;
    while ((fgets(str, 100, fptr)) != NULL)
    {
        index = 0;
        while ((pos = strstr(str + index, word)) != NULL)
        {
            index = (pos - str) + 1;

            count++;
        }
    }
   printf("total %d number of ocuurance in this file\n",count);
}
