/*
 ============================================================================
 Name        : ckadai11.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int i, cnt,sum = 0;

printf("正の整数を入力「１−１０」：");
scanf("%d",&cnt);
for( i = 1; i<=cnt; i++){
	sum = sum + i;
	printf("i = %d sum=%d\n",i,sum);

}
return 0;
}
