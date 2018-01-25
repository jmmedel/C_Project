/*
 ============================================================================
 Name        : ckadai23.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x,y;

	while(1){
     printf("月を入力");
     scanf("%d",&x);
     if(x <=12){
    	 break;
     }else {
    	 printf("月の入力は「1 以上 12 以下」にしてください\n");
    	 printf("月を入力");
     }
	}

	while(1){
	     printf("日を入力");
	     scanf("%d",&y);
	     if(y <=31){
	    	 break;
	     }else {
	    	 printf("日の入力は「1 以上 31 以下」にしてください\n");
	    	 printf("日を入力");
	     }
		}

printf(" 入力された日付は「%d 月 %d 日」です",x,y);



}
