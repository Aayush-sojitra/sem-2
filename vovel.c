#include <stdio.h>

void main()
{
   char a;
   printf("enter a char:");
   scanf("%c",&a);
   if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
       printf("char is vovel");
   }
   else{
       printf("char is consonant");
   }
}
