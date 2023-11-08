//Create a structure book with book title, author, publication, and price. Read data of 3 books and display
#include<stdio.h>
struct book{
	char title[30];
	char author[50];
	char publication[60];
	float price;
};
int main(){
	int i,n=3;
	struct book b[n];
	for(i=0;i<n;i++){
	printf("enter Book %d details :\n",i+1);
	printf("enter title :");
	scanf("%s",&b[i].title);
	printf("enter author :");
	scanf("%s",&b[i].author);
	printf("enter publication :");
	scanf("%s",&b[i].publication);
	printf("enter price :");
	scanf("%f",&b[i].price);
}
	for(i=0;i<n;i++){
	printf("\n Book %d details :",i+1);
	printf("\ntitle is =%s\n",b[i].title);
	printf("author is =%s\n",b[i].author);
	printf("publication is =%s\n",b[i].publication);
	printf("price is =%f",b[i].price);
}
}
