#include<stdio.h>
void main(){
	int a,b;
	printf("enter value of a & b :");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a= %d\n",a);
	printf("b= %d",b);
}
