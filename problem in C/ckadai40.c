/*
 ============================================================================
 Name        : ckadai40v2.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//warning dont use gets is not safe to use compiler
//
int main(void) {
	char str[80];
	int i = 0;
	printf("文字列を入力:");

	while (gets(str) != NULL  ){

		for (i = 0; str[i] != '\0'; i++){
			printf("%c",str[i]);
			// check the top level to be check
				if(isspace(str[i]) && str[i] == '\t'){
					printf("\n");

				}
			//second level to check
				else if(isspace(str[i])){
					printf("\n");
				}
		}
			printf("\n");
			printf("文字列を入力:");


		}

return 0;

}



