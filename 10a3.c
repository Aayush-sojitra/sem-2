#include<stdio.h>
void main(){
	int n,i=1,count=0;
	printf("enter a number :");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
		count=count+1;
	}
		i++;
		
	}
	if(count==2){
		printf("num is prime");
	}
	else{
		printf("num is not prime");
	}

}
