#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS   1000


void repcount(char*)
{
	FILE *fptr;
	char path[100];
	int i, len, index, isUnique;

	// List of distinct words
	char words[MAX_WORDS][50];
	char word[50];

	// Count of distinct words
	int  count[MAX_WORDS];


	fptr = fopen(path, "r");

	/* Exit if file not opened successfully */
	if (fptr == NULL)
	{
		printf("Unable to open file.\n");
		printf("Please check you have read previleges.\n");

		exit(EXIT_FAILURE);
	}

	// Initialize words count to 0
	for (i=0; i<MAX_WORDS; i++)
		count[i] = 0;

	index = 0;

	while (fscanf(fptr, "%s", word) != EOF)
	{
		// Convert word to lowercase
		strlwr(word);

		// Remove last punctuation character
		len = strlen(word);
		if (ispunct(word[len - 1]))
			word[len - 1] = '\0';


		// Check if word exits in list of all distinct words
		isUnique = 1;
		for (i=0; i<index && isUnique; i++)
		{
			if (strcmp(words[i], word) == 0)
				isUnique = 0;
		}

		// If word is unique then add it to distinct words list
		// and increment index. Otherwise increment occurrence 
		// count of current word.
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

	printf("\nOccurrences of all distinct words in file: \n");
	for (i=0; i<index; i++)
	{
		printf("%-15s => %d\n", words[i], count[i]);
	}    

	return;
}
