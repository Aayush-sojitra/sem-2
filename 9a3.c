#include <stdio.h>
void main(){
    int x,y,result=1;
    printf("enter a value of x :");
    scanf("%d",&x);
    printf("enter a value of y :");
    scanf("%d",&y);
    while(y>0){
        result=result*x;
        y--;
    }
    printf("%d",result);
}
