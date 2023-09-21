#include<stdio.h>
void main(){
	int n,sum,firstdigit,lastdigit;
	printf("enter a number :");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10){
		n=n/10;
	}
	firstdigit=n;
	sum=firstdigit+lastdigit;
	printf("sum is : %d",sum);
}
