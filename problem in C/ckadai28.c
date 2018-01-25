/*
 ============================================================================
 Name        : ckadai28.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int array[10] ;
		int i=0;
		printf("配列にデータを入力\n");
		    while(1){

		    	printf("%d 件目の入力",i+1);
		    	scanf("%d", &array[i]);

                if(array[i]>100){
                	printf("入力値は「0 以上 100 以下」にしてください\n");

                	i--;
                }
                i++;
	          if(i == 10){
	        	  break;
	          }

		    };
		    for(int x = 0; x < 10; x++){
		          printf(" %d件目: %d\n ",x+1 ,array[x]);
		    }
		    return 0;


}
