/*
 ============================================================================
 Name        : ckadai26.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int Array[10] ={10,7,3,15,12,1,18,21,25,14};
    int largest = Array[0];
    int smallest = Array[0];
    for(int y = 0; y<10; y++){
    	if( largest < Array[y] ){
    	         largest = Array[y];
    	}else if (smallest > Array[y]){
    		         smallest = Array[y];
    	}

    }
    printf("配列中の値の最大値: %d \n", largest);
    printf("配列中の値の最小値: %d\n" , smallest);
    return 0;
}
