//Find maximum and minimum between two numbers using function.
#include<stdio.h>
void max(int,int);
void main(){
	int a,b;
	printf("enter value of a & b :");
	scanf("%d %d",&a,&b);
	max(a,b);
}
void max(int a,int b){
	if(a>b){
	printf("a is max.");
	printf("\n");
	printf("b is min.");
	}
	else{
	printf("b is max.");
	printf("\n");
	printf("a is min.");
	}
}
