#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("enter 3 numbers :");
	scanf("%d %d %d",&a,&b,&c);
	d=(a>b);
	
	switch(d){
		case 0:{
			printf("%d",b*c);
			break;
	}
		case 1:{
			printf("%d",a*c);
			break;
		}
	}
}
	
