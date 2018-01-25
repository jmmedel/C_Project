/*
 ============================================================================
 Name        : ckadai20.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	   char  x = '*';
			for(  int i = 0; i < 5; i++){
				printf("%c",x);
	            for(int j = 0; j < i; j++){
	            	printf("%c",x);
	            }
	            printf("\n");
			}




}
