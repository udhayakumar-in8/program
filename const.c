#include <stdio.h>
void conso(char *file) 
{
	int cons = 0;
	char c;
	FILE *fp = fopen(file, "r");
	while((c = fgetc(fp)) != EOF) {
		if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
			continue;
		else
		   ++cons;
	}
	printf("\n");
	printf("in this file %d consonants.. \n",cons);
	fclose(fp);
	return;
}
