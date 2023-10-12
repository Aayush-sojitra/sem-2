#include<stdio.h>
#include<math.h>
void main(){
	int n;
	printf("enter a size of array :");
	scanf("%d",&n);
	int a[n],i,sum=0,multi=1;
	float avg,g,h;
	for(i=0;i<n;i++){
		printf("enter an element of a[%d] :",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	for(i=0;i<n;i++){
		multi=multi*a[i];
	}
	g=pow(multi,(1.0/n));
	h=g*g/avg;
	printf("Avg is :%f\n",avg);
	printf("geometrik mean is :%f\n",g);
	printf("harmonik mean is :%f",h);
}
