#include<stdio.h>
void main(){
	int a,i;
	printf("enter a number :");
	scanf("%d",&a);
	i=a%7;
	switch(i){
		case 1 :
			printf("monday");
		break;
		case 2 :
			printf("tuesday");
		break;
		case 3 :
			printf("wednesday");
		break;
		case 4 :
			printf("thursday");
		break;
		case 5 :
			printf("friday");
		break;
		case 6 :
			printf("saturday");
		break;	
		default :
			printf("sunday");
		break;
	}
}
