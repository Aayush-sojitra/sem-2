#include<stdio.h>
void main(){
	int i,n=5,j,k=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" %d",k%2);
			k++;
		}
		printf("\n");
	}
}

