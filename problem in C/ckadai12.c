/*
 ============================================================================
 Name        : ckadai12.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void){
int i, j;
printf("  |  1  2  3  4  5  6  7  8  9\n");
printf("--+---------------------------\n");

for(i = 1; i<=9; i++){
	printf("%2d|",i);
	for(j = 1; j <=9; j++)	{
		printf("%3d", j*i);
	}
	printf("\n");
}

	return 0 ;

}
