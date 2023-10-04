#include<stdio.h>
void main(){
	int n,i,j,sum=0,res=0;
	printf("enter a value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){		
		for(j=1;j<=i;j++){	
			sum=sum+j;	
		}
		res=res+sum;
		sum=0;		
	}
	printf("%d",res);
}
