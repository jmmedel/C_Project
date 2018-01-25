/*
 ============================================================================
 Name        : ckadai13.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x, y;

	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	if(x==y){
		printf("ｘとｙは等しです");
	}else{
		printf("等しいじゃない");
	}

}
