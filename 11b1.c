#include<stdio.h>
void main(){
	int i,n,t1=0,t2=1,t3;
	printf("enter a value of n :");
	scanf("%d",&n);
	printf("0 1");
	for(i=0;i<=n-2;i++){
		t3=t1+t2;
		t1=t2;
		t2=t3;
		printf(" %d",t3);		
	}
	
}
