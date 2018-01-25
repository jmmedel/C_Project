/*
 ============================================================================
 Name        : ckadai35.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char str[80];
char temp[81];
void convert_to_upper_and_lower(char str[]){
	int i = 0;

	while (str[i] != '\0') {
        if( islower(str[i])){
         str[i] =  toupper(str[i]);

        }
        else if  (isupper(str[i])){
        	str[i] = tolower(str[i]);

        }
        else if (isdigit(str[i])){
        	str[i] = '*';
        }
	i++;
	}

    printf("変換後の文字列 %s ",str);


}

void functionrun(){
	int i = 0;
	printf("半角文字列を入力:");
		fgets(str,80,stdin);
	    while (str[i] != '\0') {
		          temp[i] = str[i];
		          i++;
				}
		convert_to_upper_and_lower(str);
	    printf("変換前の文字列 %s",temp);


}


int main(void)
{

functionrun();



return 0;
}
