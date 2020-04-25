#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#define MAX_WORDS   1000

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}
void repcount(char*rec)
{
	char path[100];
	int i, len, index, isUnique;

	char words[MAX_WORDS][50];
	char word[50];

	int  count[MAX_WORDS];


	FILE* fptr = fopen(rec, "r");

	if (fptr == NULL)
	{
		printf("error in to open file.\n");
		return;

	}

	// Initialize words count to 0
//	for (i=0; i<MAX_WORDS; i++)
//		count[i] = 0;
	bzero(count,MAX_WORDS);

	index = 0;

	while (fscanf(fptr, "%s", word) != EOF)
	{
		strlwr(word);
		len = strlen(word);
		if (ispunct(word[len - 1]))
			word[len - 1] = '\0';


		isUnique = 1;
		for (i=0; i<index && isUnique; i++)
		{
			if (strcmp(words[i], word) == 0)
				isUnique = 0;
		}

		if (isUnique) 
		{
			strcpy(words[index], word);
			count[index]++;

			index++;
		}
		else
		{
			count[i - 1]++;
		}
	}
	fclose(fptr);

	printf("\nOccurrences of all repeated words in file: \n");
	for (i=0; i<index; i++)
	{
		printf("%-15s => %d\n", words[i], count[i]);
	}    

	return;
}
