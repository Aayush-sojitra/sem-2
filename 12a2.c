#include<stdio.h>
void main(){
	int i,n=5,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
