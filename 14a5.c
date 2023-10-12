#include<stdio.h>
void main(){
	int a[5],i,b[5],count=0;
	for(i=0;i<5;i++){
		printf("enter height and weight of person %d :",i+1);
		scanf("%d %d",&a[i],&b[i]);
	if(a[i]>170 && b[i]<50){
		count++;
	}
}
	printf("%d",count);
}

