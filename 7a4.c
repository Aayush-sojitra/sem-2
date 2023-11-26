//Find out largest number from given 3 numbers using conditional operator.
#include<stdio.h>
void main(){
	int a,b,c;
	printf("entwr value of a,b,c :");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)?((a>c)?printf("a is max"):printf("c is max")):((b>c)?printf("b is max"):printf("c is max"));
}
