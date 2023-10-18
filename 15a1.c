#include<stdio.h>
void main(){
	int i,arr[5],cpyarr[5];
	for(i=0;i<5;i++){
		printf("enter an element of arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		cpyarr[i]=arr[i];
		printf("cpyarr is :%d\n",cpyarr[i]);
	}

}
