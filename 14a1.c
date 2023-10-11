#include<stdio.h>
void main(){
	int n;
	printf("enter a size of array :");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		printf("enter an element of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("array[%d]=%d\n",i,a[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--){
		printf("array[%d]=%d\n",i,a[i]);
	}
}
