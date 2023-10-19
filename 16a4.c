// Perform Addition of two matrices.
#include<stdio.h>
void main(){
	int a[2][2],b[2][2],i,j,sum[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter an element in a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter an element in b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
	
