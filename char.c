#include<stdio.h>
void main(){
	char c;
	printf("enter the character : ");
	scanf("%c",&c);\
	if(c>='a' && c<='z'){
	printf("character is lowercase");
}
	else if(c>='A' && c<='Z'){
	printf("character is uppercase");
}
	else if(c>='1' && c<='9'){
	printf("character is digit");	
}
}
