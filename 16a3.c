 //Read and store the roll no and marks of 20 students using 2D array.
#include<stdio.h>
void main(){
	int a[20][2],i;
	for(i=0;i<20;i++){
			printf("enter a roll no. in a[%d] :",i+1);
			scanf("%d",&a[i][0]);
			printf("enter marks in a[%d] :",i+1);
			scanf("%d",&a[i][1]);
		}
	
	printf("Roll no.\tMarks\n");
	for(i=0;i<20;i++){
		printf("%d\t\t%d",a[i][0],a[i][1]);
	    printf("\n");
    }
}
