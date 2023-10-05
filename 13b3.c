#include<stdio.h>
void main(){
	int i,n=5,j;
	for(i=1;i<=5;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		
		for(j=0;j<=5-i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
