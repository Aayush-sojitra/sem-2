#include<stdio.h>
void main(){
	int n,max,min;
	printf("enter a size of array :");
	scanf("%d",&n);
	int a[n],i,sum=0;
	float avg;
	for(i=0;i<n;i++){
		printf("enter an element of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min)
		min=a[i];
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("sum = %d\n",sum);
	printf("avg = %f\n",avg);
	printf("max array = %d\n",max);
	printf("min array = %d",min);
}
