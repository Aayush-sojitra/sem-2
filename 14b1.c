#include<stdio.h>
void main(){
	int n;
	printf("enter a size of array :");
	scanf("%d",&n);
	int a[n],i,sum=0,count=0;
	float avg;
	for(i=0;i<n;i++){
		printf("enter an element of a[%d] :",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	for(i=0;i<n;i++){
		if(a[i]>avg)
			count++;
		}
	printf("the count of num. is :%d",count);
}
