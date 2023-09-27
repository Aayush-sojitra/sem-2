#include<stdio.h>
void main(){
	int i,n=5,j;
	for(i=n;i>=1;i--){
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
