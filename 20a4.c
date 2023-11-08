//Create structure student with name, percentage and age. Read data of 5 students using array of structure.
#include<stdio.h>
struct student{
	char name[30];
	float per;
	int age;
};
int main(){
	int i,n=5;
	struct student s[n];
	for(i=0;i<n;i++){
	printf("enter name of student %d :",i+1);
	scanf("%s",&s[i].name);
	printf("enter percentage of student %d :",i+1);
	scanf("%f",&s[i].per);
	printf("enter age of student %d :",i+1);
	scanf("%d",&s[i].age);
	}
	for(i=0;i<n;i++){
		printf("name of student :%s\n",s[i].name);
		printf("percentage of student :%f\n",s[i].per);
		printf("age of student :%d\n",s[i].age);
	}
	
}
