/*
 ============================================================================
 Name        : ckadai39.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	char str[80];
	int i,j,len,len1;
		printf("文字列を入力:");
		while ( gets(str) != NULL ){
			/*calculating length*/
			for(len=0; str[len]!='\0'; len++);
			/*assign 0 to len1 - length of removed characters*/
			    len1=0;
			    /*Removing consecutive repeated characters from string*/
			       for(i=0; i<(len-len1);)
			       {
			           if(str[i]==str[i+1])
			           {
			               /*shift all characters*/
			               for(j=i;j<(len-len1);j++)
			                   str[j]=str[j+1];
			               len1++;
			           }
			           else
			           {
			               i++;
			           }
			       }
				puts(str);
				printf("文字列を入力:");
				}

	return 0;
}
