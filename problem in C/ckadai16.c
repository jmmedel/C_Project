/*
 ============================================================================
 Name        : ckadai16.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;


	printf("整数値を入力してください：");
	scanf("%d",&x);

	if(x == 0){
    printf("[零です]");
	}else if (x == 1){
		printf("壱です");
	}else if (x == 2){
		printf("弐です");
	}else {
		printf("「零でも壱でも弐でもありません」");
	}





}
