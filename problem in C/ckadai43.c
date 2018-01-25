/*
 ============================================================================
 Name        : ckadai43.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* ヘッダファイル -------------------------------------------------------- */
#include <stdio.h>
/* 記号定数(マクロ) ---------------------------------------------------- */
#define S1 3
#define S2 10

/* プロトタイプ宣言 ------------------------------------------------------ */
int Get_Maxarray(int *data, int size);
int Get_Minarray(int *data, int size);
/* エントリポイント テスト用 -------------------------------------------- */
int main(void)
{
int test1[S1] = { 13, 10, 15 };
int test2[S2] = { 5, 7, 2, 4, 1, 3, 10, 9, 6, 8 };

int max, min;
max = Get_Maxarray(test1, S1);
min = Get_Minarray(test1, S1);
printf("test1 最大:%d test1 最小:%d\n", max, min);
max = Get_Maxarray(test2, S2);
min = Get_Minarray(test2, S2);
printf("test2 最大:%d test2 最小:%d\n", max, min);
return 0;
}
/* -----------------------------------------------------------------------
/* 関数名:Get_Maxarray
/* 機 能:引数で指定された int 型配列中の最大値を求める
/* 戻り値:配列中の最大値(int 型)
/* 引 数:・int *data :配列の先頭アドレス
/*
・int size :配列の要素数
 -----------------------------------------------------------------------*/
int Get_Maxarray(int *data, int size)
{
	int i ;
	int max = data[0]; //temporary oki champition
	for (i = 0; i<size; i++){
		if(data[i] > max){
			max = data[i];
		}
	}
	return max;
}

/* -----------------------------------------------------------------------
/* 関数名:Get_Minarray
/* 機 能:引数で指定された int 型配列中の最小値を求める
/* 戻り値:配列中の最小値(int 型)
/* 引 数:・int *data :配列の先頭アドレス
/*
・int size :配列の要素数 */

int Get_Minarray(int *data, int size)
{
	int i ;
		int min = data[0]; //temporary chichai champotion
		for (i = 0; i<size; i++){
			if(data[i] < min){
				min = data[i];
			}
		}
		return min;

}
