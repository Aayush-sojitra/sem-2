#include <stdio.h>

void main()
{
   int a,b,temp;
   printf("enter no 1:");
   scanf("%d",&a);
    printf("enter no 2:");
   scanf("%d",&b);
  if(temp=a){
   a=b;
   b=temp;
  
   printf("no.1 is: %d",a);
   printf("no.2 is: %d",b);
}
}
