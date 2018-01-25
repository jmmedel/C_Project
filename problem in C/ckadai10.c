/*
 ============================================================================
 Name        : ckadai10.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char a;
	    printf("半角数字を入力してください:");
	    scanf("%c",&a);
	    printf("文字「%c」の次の文字は「%c」です.",a,a+1);
	    return 0;


}
