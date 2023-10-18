#include<stdio.h>
void main(){
	int i,n,s,arr[n],count=0;
	printf("enter a size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter an element of arr[%d] :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("which element are you find:");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(arr[i]==s){
			count++;
			break;
		}
	}
	if(count==1)
	printf("Element is present in array");
	else
	printf("Element is not present in array");
}
