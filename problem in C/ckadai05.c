/*
 ============================================================================
 Name        : ckadai05.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, lastDigit;
	    printf("正の整数を入力してください: ");
	    scanf("%d", &n);

	    lastDigit = n % 10;
	    printf("その数の最後桁は「%d」です", lastDigit);

    return 0;
}
