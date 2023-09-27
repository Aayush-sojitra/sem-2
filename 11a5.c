#include<stdio.h>
void main(){
	int n,i,result=1;
	printf("enter value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		result=result*i;
	}
	printf("%d",result);
}
