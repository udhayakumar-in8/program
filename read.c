#include<stdio.h>
#include <ctype.h>
void alpha(char*);
void numeric(char*);
void special(char*); 
void lines(char*); 
void spaces(char*); 
void lword(char*); 
void sword(char*); 
void occur(char*); 
int main(int carg,char*varg[])
{
if(carg!=3){
            printf("use proper cmdline input\n");
            printf("FileName-String..\n");
            return 0;
	   }
	   FILE *fp=fopen(varg[1],"r");
	   if(fp==NULL){
	   		 printf("file Not found!\n");
			 return 0;
		       }
	char ch;
	while(1){
		printf("File Programs\n");
		printf("1.alphabbets 2. numerics  3.spcial char  4.how many lines 5.how many spaces 6.larger word 7.smaller word 8.number of occurancs\n");
		printf("which code you want run!option will be 1-15 0 is exit..\n");
		scanf(" %c",&ch);

		   if(ch==48){
		          printf("exit--->..\n");
		          return 0; } 
		   else if(ch==49){
		          printf("number of Alphabets..\n");
			  alpha(varg[1]); } 
		   else if(ch==50){
		          printf("Number of Numerics..\n");
		          numeric(varg[1]); } 
		   else if(ch==51){
		          printf("Number of special charchters..\n");
		          special(varg[1]); } 
		  /* else if(ch==52){
		          printf("number of Lines..\n");
		          lines(varg[1]); } 
		   else if(ch==53){
		          printf("number of spaces..\n");
		          spaces(varg[1]); } 
		   else if(ch==54){
		          printf("find largest word..\n");
		          lword(varg[1]); } 
		   else if(ch==55){
		          printf("find smallest word..\n");
		          sword(varg[1]); } 
		   else if(ch==56){
		          printf("number of occurances..\n");
		          occur(varg[1]); } */

		}

}
