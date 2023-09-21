#include <stdio.h>
void main(){
    int n,i=1,sum=0,sign=1;
    printf("enter a value :");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i*sign;
        i++;
        sign=-sign;
    }
    printf("sum is :%d",sum);
    }
