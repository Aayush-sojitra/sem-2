//Create, declare and initialize structure employee.
#include<stdio.h>
struct employee{
	char name[30];
	int salary;
};
int main(){
	struct employee e1;
	printf("enter name :");
	scanf("%s",&e1.name);
	printf("enter salary :");
	scanf("%d",&e1.salary);
	
	printf("employee name :%s\n",e1.name);
	printf("employee salary :%d\n",e1.salary);
	
}
