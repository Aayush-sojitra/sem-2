#include<stdio.h>
struct std{
	char name[2];
	int marks;
	float pr;
};
union stu{
	char name[2];
	int marks;
	float pr;
};
void main(){
	struct std s1;
	union  stu s2;
	printf("size of struct :%d \n",sizeof(s1));
	printf("size of union :%d \n",sizeof(s2));
}
