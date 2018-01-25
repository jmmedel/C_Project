/*
 ============================================================================
 Name        : ckadai42.c
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
double Get_Avgarray(int *data, int size);
/* エントリポイント テスト用 -------------------------------------------- */
int main(void)
{
int test1[S1] = { 13, 10, 15 };
int test2[S2] = { 5, 7, 2, 4, 1, 3, 10, 9, 6, 8 };
double avg1, avg2;
avg1 = Get_Avgarray(test1, S1);
avg2 = Get_Avgarray(test2, S2);
printf("test1 平均:%.2f\n", avg1);
printf("test2 平均:%.2f\n", avg2);
return 0;
}
/*
----------------------------------------------------------------------
関数名:Get_Avgarray
機 能:引数で指定された int 型配列の平均値を求める
戻り値:配列の平均値(double 型)
引 数:・int *data :配列の先頭アドレス
・int size :配列の要素数
-----------------------------------------------------------------------
*/


double Get_Avgarray(int *data, int size)
{	double avg;
	int sum = 0, i;
	for ( i = 0;  i < size ; i++ ) {
	 sum += data[i];
	}
	avg = (double) sum/ size;
	return avg;
}

