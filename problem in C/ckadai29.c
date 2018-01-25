/*
 ============================================================================
 Name        : ckadai29.c
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
           int temp, sum;
			int i=0;
			float avg;

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


			    };// end of while loop


			    /*  sorting begins ... */
			    for(int x = 0; x<10; x++){

			    for(int b =x+1; b<10; b++){
			     if (array[x] < array[b])
                 {
			    temp = array[x];
			   array[x] = array[b];
			   array[b] = temp;
			              } // end of if
			             } // end of loop2
  }// end of loop1


int largest = array[0];
int smallest = array[0];

 printf("配列内容一覧(降順にソート済み)\n");
	 for (i = 0; i < 10; i++)
	 {
	 sum += array[i];
     avg = (float)sum/10;
	 printf("%d\n", array[i]);
	 if( largest < array[i] ){
	     	         largest = array[i];
	     	} if (smallest > array[i]){
	     		         smallest = array[i];
	     	}
	 }
	 printf("配列中の値の合計:%d\n",sum);
	 printf(" 配列中の値の平均:%.2f\n",avg);
	 printf("配列中の値の最大値: %d \n", largest);
	 printf("最小値: %d \n" , smallest);



return 0;


}
