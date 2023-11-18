#include<stdio.h>
void main(){
	int a,b,ans;
	char n;
	printf("enter a value of a&b:");
	scanf("%d%d",&a,&b);
	printf("enter a choice:");
	scanf(" %c",&n);
	if(n=='+'){
		ans=a+b;
	}
	if(n=='-'){
		ans=a-b;
	}
	if(n=='/'){
		ans=a/b;
	}
	if(n=='*'){
		ans=a*b;
	}
	printf("%d",ans);
	
}
