
#include <stdio.h>

void main()
{
   int a,b,c;
   printf("enter 3 numbers:");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b){
      if(a>c){
          printf("largest num is %d",a);
      }
      else{
          printf("largest num is %d",c);
      }
  }
  else {
      if(b>c){
          printf("largest num is %d",b);
      }
      else{
          printf("largest num is %d",c);
      }
      
  }
 
}

