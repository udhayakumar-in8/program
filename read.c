#include<stdio.h>
#include<ctype.h>
#include<string.h>
void alpha(char*);
void numeric(char*);
void special(char*); 
void lines(char*); 
void spaces(char*); 
void bigword(char*); 
void smallword(char*); 
void countoccur(char*,char*); 
void pal(char *);
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
		printf("\n---File Programs--\n");
		printf("--1.alphabbets 2. numerics  3.spcial char  4.how many lines 5.how many spaces \n 6.larger word 7.smaller word 8.number of occurancs 9.palindrome... 10.No_of-vowels..\n");
		printf("   which code you want run!option will be 1-15 0 is exit..\n");
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
		   else if(ch==52){
		          printf("number of Lines..\n");
		          lines(varg[1]); } 
		   else if(ch==53){
		          printf("number of spaces..\n");
		          spaces(varg[1]); } 
		   else if(ch==54){
		          printf("find largest word..\n");
		          bigword(varg[1]); } 
		   else if(ch==55){
		          printf("find smallest word..\n");
		          smallword(varg[1]); } 
		   else if(ch==56){
		          printf("number of occurances..\n");
		          countoccur(varg[1],varg[2]); } 
		   else if(ch==57){
		          printf("if any palindrome..\n");
		          pal(varg[1]); } 

		}

}
