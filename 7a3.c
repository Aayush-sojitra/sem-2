#include<stdio.h>
void main(){
	int a,b,c;
	char x;
	float d;
	printf("enter operation :");
	scanf("%c",&x);
	printf ("enter 2 numbers :");
	scanf("%d %d",&a,&b);
	switch(x){
		case'+' :{
			c=a+b;
			printf("addition = %d",c);
			break;
		}
			case'-' :{
			c=a-b;
			printf("sub = %d",c);
			break;
		}
			case'*' :{
			c=a*b;
			printf("multification = %d",c);
			break;
		}
			case'/' :{
			d=a/b;
			printf("division = %f",d);
			break;
		}
	}
}
