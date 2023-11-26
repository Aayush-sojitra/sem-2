#include<stdio.h>
void main(){
	int a,b,c,d,e;
	float per;
	printf("enter marks of maths :");
	scanf("%d",&a);
	printf("enter marks of df :");
	scanf("%d",&b);
	printf("enter marks of cpc :");
	scanf("%d",&c);
	printf("enter marks of es :");
	scanf("%d",&d);
	printf("enter marks of ic :");
	scanf("%d",&e);
	per=(a+b+c+d+e)/5;
	printf("per is : %f\n",per);
	if(per<=35){
		printf("fail");}
	else if(36<=per<=45){
		printf("pass class");}
	else if(46<=per<=60){
		printf("second class");}
	else if(61<=per<=70){
		printf("first class");}
	else if(per>70){
		printf("Distinction");}
}
