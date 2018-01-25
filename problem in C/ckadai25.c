/*
 ============================================================================
 Name        : ckadai25.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x[5] = {15,8,48,50,27};
    int even , odd , sum;
    float avg ;
	for( int y = 0; y<5; y++){
		     sum += x[y];
		     //avg = (float)sum/5;
             if (x[y]%2 == 0){
                   even++;
				   }
                else{
                   odd++;}
	}
	avg = (float)sum/5;
	            printf("配列中の値の合計:%d\n",sum);
				printf(" 配列中の値の平均:%.2f\n",avg);
				printf("配列中の奇数の数:%d\n",odd);
				printf(" 配列中の偶数の数:%d\n",even);

}
