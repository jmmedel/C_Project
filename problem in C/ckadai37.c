/*
 ============================================================================
 Name        : ckadai37.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int c;
	c = getchar();
	while ( c != EOF ) {
		if ( isupper(c) )
		c = tolower(c);
	    putchar(c);


	c = getchar();
	}
}
