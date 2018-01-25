/*
 ============================================================================
 Name        : ckadai32.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int rs;
  int den[]={10000,5000,2000,1000,500,100,50,10,5,1}; //storing all the denominations in an array
  int count;
	while(1){
	printf("金額を入力");
    scanf("%d",&rs);
   if(rs <=9999999){
	   break;

   }else{
	   printf("金額は「1~9999999」の範囲で入力してください\n");

   }

	}// end if while

  for(int i = 0; i<10; i++){
   count =rs/den[i];
   if(count!=0) //printing that denomination if the count is not zero
   {
    printf("%d \t %d \t \n",den[i],count);
    }

    rs=rs%den[i]; //finding the remaining amount whose denomination is to be found
  }




}// end of main

