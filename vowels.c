#include <stdio.h>
void vowels(char *file) 
{
	int vowels = 0;
	char c;
	FILE *fp = fopen(file, "r");
	while((c = fgetc(fp)) != EOF) {
		if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
			vowels++;	
	}
	printf("\n");
	printf("in this file %d vowels.\n", vowels);
	fclose(fp);
	return;
}
