#include <stdio.h>

void main() {
    int n,i=1,evensum=0,oddsum=0;
    printf("enter 10 number,one number at a time");
    while(i<=10){
        printf("enter a number:");
        scanf("%d",&n);
        if(n%2==0){
            evensum=evensum+n;
        }
        else{
            oddsum=oddsum+n;
        }
        i++;
    }
    printf("evensum is : %d",evensum);
    printf("/n");
    printf("oddsum is : %d",oddsum);
}
