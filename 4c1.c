#include<stdio.h>
void main(){
	int sec,hour,min,time;
	printf("enter sec:");
	scanf("%d",&sec);
	hour=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf("time=%d:%d:%d",hour,min,sec);
	
}
