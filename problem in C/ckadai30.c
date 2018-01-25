/*
 ============================================================================
 Name        : ckadai30v2.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : ckadai30.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

   int i = 0;
   int j = 0;
  
  int sum = 0;
	int ten[5][3] =
	{      //0  1   2
			{55,67,75},
			{30,41,55},
			{90,85,88},
			{77,75,72},
			{95,65,89},

	};


    printf("国語\t数学\t英語  \t|合計 \n");
    while(i < 30){printf("-");i++; }
    printf("\n");

    for(int a = 0; a<5; a++){

    	for(int b = 0; b<3; b++){

         printf("%d \t",ten[a][b]  );

        sum += ten[a][b];

    	}//end of row


        printf("|%d\n",sum);
        sum = 0;
    }// end loop column

    while(j < 30){printf("-");j++; }



}
