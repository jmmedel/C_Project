/*
 ============================================================================
 Name        : ckadai44.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* ヘッダファイル -------------------------------------------------------- */
#include <stdio.h>
/* 記号定数(マクロ) ---------------------------------------------------- */
#define SIZE 10
/* プロトタイプ宣言 ------------------------------------------------------ */
void Put_Array(int *data, int size);
void Sort_Asc(int *data, int size);
void Sort_Desc(int *data, int size);
/* エントリポイント テスト用 -------------------------------------------- */
int main(void)
{
int test[SIZE] = { 5, 7, 2, 4, 1, 3, 10, 9, 6, 8 };
printf("並べ替え前の一覧\n");
Put_Array(test, SIZE);
printf("\n 昇順に並べ替えた後の一覧\n");
Sort_Asc(test, SIZE);
Put_Array(test, SIZE);
printf("\n 降順に並べ替えた後の一覧\n");
Sort_Desc(test, SIZE);
Put_Array(test, SIZE);
return 0;
}
/* -----------------------------------------------------------------------
/* 関数名:Put_Array
/* 機 能:引数で指定された int 型配列を出力する
/* 戻り値:なし
/* 引 数:・int *data :配列の先頭アドレス
/*
・int size :配列の要素数
*/
void Put_Array(int *data, int size)
{int i;
for (i = 0; i<size; i++){
	printf("Array[%d]%d\n",i, data[i]);
 }
}

/* -----------------------------------------------------------------------
/* 関数名:Sort_Asc
/* 機 能:引数で指定された int 型配列を昇順にソートする
/* 戻り値:なし
/* 引 数:・int *data :配列の先頭アドレス
/*
・int size :配列の要素数
*/
void Sort_Asc(int *data, int size)
{
	int i , j,a;
    for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {

            if (data[i] > data[j])
            {
                a =  data[i];
                data[i] = data[j];
                data[j] = a;
            } // end of if

        }// end of for

    }// end of for


}// end of def

/* -----------------------------------------------------------------------
/* 関数名:Sort_Desc
/* 機 能:引数で指定された int 型配列を降順にソートする
/* 戻り値:なし
/* 引 数:・int *data :配列の先頭アドレス
/*
・int size :配列の要素数
*/
void Sort_Desc(int *data, int size)
{   int i , j,a;
	 for (i = 0; i < size; ++i)
	        {
	            for (j = i + 1; j < size; ++j)
	            {
	                if (data[i] < data[j])
	                {
	                    a = data[i];
	                    data[i] = data[j];
	                    data[j] = a;
	                } // end for if

	            }  // end for for

	        } // end of for


}// end of sort desc
