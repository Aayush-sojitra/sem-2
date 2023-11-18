#include<stdio.h>
void main(){
	char a;
	printf("enter a char. :");
	scanf("%c",&a);
	((a>='A' && a<='Z')||(a>='a' && a<='z'))?printf("alphabet"):printf("not alphabet");
}
