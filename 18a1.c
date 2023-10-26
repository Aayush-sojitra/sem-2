//Add two numbers using function.
#include<stdio.h>
void add(int,int);
void main(){
	int a,b;
	printf("enter value of a & b :");
	scanf("%d %d",&a,&b);
	add(a,b);
	
}
void add(int a,int b){
	int result;
	result=a+b;
	printf("sum is :%d",result);
}
