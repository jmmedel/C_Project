#include <stdio.h>
#include <ctype.h>
/*
 ============================================================================
 Name        : ckadai34v2c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
int i, cnt;

void get_small(char str[]){
	i = 0;
	cnt = 0;
	while ( str[i] != '\0' ) {
	if ( islower(str[i]) ) {
	cnt++;
	}
	i++;
	}
		printf("英小文字「%d」\n",cnt );
}
void get_big(char str[]){
	i = 0;
	cnt = 0;
	while ( str[i] != '\0' ) {
	if ( isupper(str[i]) ) {
	cnt++;

	}
	i++;
	}
		printf("英大文字「%d」\n",cnt );
}

void get_number(char str[]){
	    i = 0;
		cnt = 0;
		while ( str[i] != '\0' ) {
		if ( isdigit(str[i]) ) {
		cnt++;

		}
		i++;
		}
			printf("数字「%d」\n",cnt );
}




int main(void)
{

	char str[81];
	printf("半角文字列を入力:");
	fgets(str,81,stdin);
	get_small(str);
	get_big(str);
	get_number(str);


return 0;
}
