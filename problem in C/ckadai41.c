/*
 ============================================================================
 Name        : ckadai41.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
/* プロトタイプ宣言------------------------------------------------------- */
char to_upper(char ch);
/* エントリポイント To_Upper 関数の動作チェック-------------------------- */
int main(void) {
char c1 = 'a', c2 = 'B', c3 = 'c';
printf("変換前:%c%c%c\n", c1, c2, c3);
c1 = to_upper(c1);
c2 = to_upper(c2);
c3 = to_upper(c3);
printf("変換後:%c%c%c\n", c1, c2, c3);
return 0;
}
/* ----------------------------------------------------------------------- */ /*
 * 関数名:To_Upper */
/* 機 能:  英大文字  → 英小文字 */
/* 戻り値:変換された文字(char 型) */ /*
/* 引 数:ch : 半角文字(char 型) */
/* ----------------------------------------------------------------------- */
char to_upper(char c) {
  if ((c >= 'a') && (c <= 'z')) {
    return (c - 0x20);
  }
}
// to lower
char to_lower(char c) {
  if ((c >= 'A') && (c <= 'Z')) {
    return (c + 0x20);
  }
}







