/*
 ============================================================================
 Name        : ckadai07.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

 double x,y;
 printf("x=");
 scanf("%lf",&x);
 printf("y=");
 scanf("%lf",&y);

	printf("a+b = %.3f\n",x+y);
	printf("a-b =%.3f\n",x-y);
	printf("a*b =%.3f\n",x*y);
	printf("a/b =%.3f\n",x/y);


	return 0;
}
