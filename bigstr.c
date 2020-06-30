#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_WORD_LENGTH 20 
void bigword(char *rec) 
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
            if (strlen(temp) > largest_len) 
            {
                strcpy(largest, temp);
                largest_len = strlen(largest);
            }
            temp = strtok(NULL, " ");
        }
    }

    printf("The largest word in the file is: %s\n", largest);
    fclose(fp);
    printf("bigstring..\n");
}
