//Return the maximum of three floating-point numbers
#include<stdio.h>
float max(float,float,float);
void main(){
	float a,b,c,res;
	printf("enter value of a,b & c :");
	scanf("%f %f %f",&a,&b,&c);
 	res=max(a,b,c);
 	printf("maximum value is :%f",res);
}
float max(float a,float b,float c){
	float max;
	if(a>b){
		if(a>c)
		max=a;
		else
		max=c;
	}
	else{
		if(b>c)
		max=b;
		else
		max=c;
	}
		return max;
	}
