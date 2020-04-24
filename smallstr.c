#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_WORD_LENGTH 20 
int smallword(char *rec)
{
    FILE *fp;
    char str[60];
    char *largest = (char*) malloc (MAX_WORD_LENGTH);
    char *smallest = (char*) malloc (MAX_WORD_LENGTH);
    int smallest_len = MAX_WORD_LENGTH; 
    int largest_len = 0;

        fp = fopen(rec, "r");

    while (fgets (str, 60, fp) != NULL) 
    {
        char *temp = strtok(str, " ");
        while (temp != NULL) 
        {
            if (strlen(temp) < smallest_len) 
            {
                strcpy(smallest, temp);
                smallest_len = strlen(smallest);
            }
	     temp = strtok(NULL, " ");
        }
    }

    printf("The smallest word in the file is: %s\n",smallest);
    fclose(fp);
}
