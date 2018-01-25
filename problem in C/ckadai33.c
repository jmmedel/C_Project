/*
 ============================================================================
 Name        : ckadai33.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

#define TRUE    1
#define FALSE   0

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};


int inputyear()
{
	int year;

	printf("万年カレンダー  ");
	printf(" 年を入力");
	while(1){
	scanf("%d", &year);
	if(year > 9999){
		printf("年は「1~9999」の範囲で入力してください");

	}else{
		printf("年を入力: %d年\n",year);
		break;
	}
	}
	return year;
}

int determinedaycode(int year)
{

	int daycode;
	int d1, d2, d3;

	d1 = (year -1)  /4;
	d2 = (year -1) /100;
	d3 = (year -1) /400;

	daycode = (year + d1 - d2 + d3  ) %7;


	return daycode ;
}


int determineleapyear(int year)
{
	if((year% 4 == FALSE && year%100 != FALSE) || (year%400 == FALSE))
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

int getmonths()
{
   int months;
   printf("月を入力:");
   while(1){
	   scanf("%d",&months);
	   if(months>13){
		   printf("月を入力:%d\n 月は「1~12」の範囲で入力してください",months);

	   }else{
		   printf("月を入力:%d\n",months);
		   break;
	   }
   }

 return months;
}

void calendar(int year, int daycode , int x)
{
	int  day;

	for ( int month = x  ; month <= x; month++ )
	{
		printf("%d年%d月のカレンダー\n", year,x);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d", day );

			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 ){
				printf("   " );

			}else
				printf("\n " );
		}


	}

}

int main(void)
{
	int year, daycode,month;

	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	month = getmonths();
	calendar(year, daycode,month);

	printf("\n");
}
