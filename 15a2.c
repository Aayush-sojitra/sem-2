#include<stdio.h>
void main(){
	int i,arr[5],count=0;
	for(i=0;i<5;i++){
		printf("enter an element of arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(arr[i]<0)
		count++;
	}
	printf("totle no. of negative elements is :%d",count);
}
