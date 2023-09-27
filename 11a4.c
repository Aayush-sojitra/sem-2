#include<stdio.h>
void main(){
	int x,y,i,result=1;
	printf("enter value of x :");
	scanf("%d",&x);
	printf("enter value of y :");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		result=result*x;
	}
	printf("%d",result);
}
