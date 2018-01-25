/*
 ============================================================================
 Name        : ckadai22.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char c;

	    for(c = 'A'; c <= 'Z'; c++){
	       printf("%c  " , c);
	       if(c%7 ==1){
	    	   printf("\n");
	       }
	    }
}
