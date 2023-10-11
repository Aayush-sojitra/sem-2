#include<stdio.h>
void main(){
	int i,n=5,j;
	char alph='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i%2==0){
				printf("%c ",alph);
				alph++;
			}
			else{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
