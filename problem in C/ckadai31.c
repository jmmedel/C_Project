/*
 ============================================================================
 Name        : ckadai31.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

     char x;
	 char week[7][10] = {

       "Sunday",
       "Monday",
       "Tuesday",
       "Wednesday",
       "Thursday",
       "Friday",
       "Saturday"

	};

	 printf("半角英大文字を入力 ");
	 scanf("%c",&x);
	 switch(x){

	 case 'S':
	 case 's':
		for(int a = 0; a<10; a++){
			printf("%c",week[0][a]);
		}
		printf("\n");
		for(int a = 0; a<10; a++){
					printf("%c",week[6][a]);
				}

		 break;
	 case 'm':
	 case 'M':
		 for(int a = 0; a<10; a++){
		 			printf("%c",week[1][a]);
		 		}

		 break;
	 case 'T':
	 case 't':
		 for(int a = 0; a<10; a++){
		 		printf("%c",week[2][a]);
		}
		 printf("\n");
		 for(int a = 0; a<10; a++){
			 printf("%c",week[4][a]);
		 }
	      break;

	 case 'W':
	 case 'w':
		 for(int a = 0; a<10; a++){
				printf("%c",week[3][a]);
			}
			      break;



	 case 'F':
		 for(int a = 0; a<10; a++){
				printf("%c",week[5][a]);
				}
			      break;

	 default:
		 printf("頭文字が一致する曜日はありませんでした");


	 }




}

