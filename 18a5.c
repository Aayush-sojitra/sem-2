 //Swap two numbers using call by value and call by reference.
#include<stdio.h>
void swap(int *,int *);
void main(){
	int a,b;
	printf("enter value of a & b :");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}	
	
