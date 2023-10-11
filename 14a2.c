#include<stdio.h>
void main(){
	int n,positive_num=0,negative_num=0;
	printf("enter a size of array :");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		printf("enter an element of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=0){
			positive_num++;
		}
		else if(a[i]<0){
			negative_num++;
		}
	}
	printf("positive num :%d\n",positive_num);
	printf("negative num :%d",negative_num);
}
