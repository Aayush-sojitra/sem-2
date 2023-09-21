#include <stdio.h>

void main() {
    int n,i=1;
    printf("enter a number :");
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0)
        printf("%3d",i);
        i++;
    }
}
