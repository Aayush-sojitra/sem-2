 //Count simple interest using function.
 #include<stdio.h>
void interest(int,int,int);
void main(){
	int p,r,t;
	printf("enter value of p,r & t :");
	scanf("%d %d %d",&p,&r,&t);
	interest(p,r,t);
}
void interest(int p,int r,int t){
	float res;
	res=(p*r*t)/100;
	printf("%f",res);
}
