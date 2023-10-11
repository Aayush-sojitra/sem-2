#include<stdio.h>
void main(){
	int n,even_num=0,odd_num=0;
	printf("enter a size of array :");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		printf("enter an element of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			even_num++;
		}
		else if(a[i]%2!=0){
			odd_num++;
		}
	}
	printf("even num :%d\n",even_num);
	printf("odd num :%d",odd_num);
}
