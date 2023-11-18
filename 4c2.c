#include<stdio.h>
void main(){
	int days,week,year;
	printf("enter no of days:");
	scanf("%d",&days);
	year=days/365;
	days=days%365;
	week=days/7;
    days=days%7;
	printf("time= %d::%d::%d",year,week,days);
	
}
