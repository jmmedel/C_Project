/*
 ============================================================================
 Name        : ckadai36v4.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Failed 実行結果1 6/21
//OK  実行結果2
//OK 実行結果3

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void number_cnt(char str[]){
	     int i = 0;
		int cnt = 0;
		while ( str[i] != '\0' ) {
		if ( isdigit(str[i]) ) {
		cnt++;

		}
		i++;
		}
		if(cnt==0){
			printf("数字は 1 文字も入力されていませんでした\n");
		}
		else{
			printf("数字のみの文字列 %s",str );
		}
}
void english_cnt(char str[]){
	int i = 0;
	int cnt = 0;
	while ( str[i] != '\0' ) {
	if ( isalpha(str[i]) ) {
	cnt++;

	}
	i++;
	}
	if(cnt == 0){
		printf("英字は 1 文字も入力されていませんでした\n");
	}
	else{
		printf("英字のみの文字列 %s\n",str );
	}
}



//getuser input
void functionrun(){
	char string[80], ch;
	int i = 0;
	char aplha[80] ;
	char digit[80];
	    printf("半角文字列を入力");
	    while((ch = getchar()) != '\n'){
	        if (!isspace(ch) && !ispunct(ch))
	        {
	            string[i] = ch;
	            if  (isalpha(string[i]) && !isdigit(string[i])){

	                   	aplha[i] = string[i];


	                   }
	                   else if (isdigit(string[i]) && !isalpha(string[i])){
	                	   digit[i] = string[i];

	                   }
	            i++;
	        }
	    }

	    english_cnt(aplha);
	    number_cnt(digit);



}


int main(void)
{

functionrun();


return 0;
}
