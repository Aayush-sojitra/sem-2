#include<stdio.h>
void main(){
	int i,n,arr[n],count=0;
	printf("enter a size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter an element of arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%3==0)
		count++;
	}
	printf("totle no. of elements divisible by 3 is :%d",count);
}
