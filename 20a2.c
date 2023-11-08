//Create a structure book with book title, author, publication, and price. Read data of 3 books and display
#include<stdio.h>
struct book{
	char title[30];
	char author[50];
	char publication[60];
	float price;
};
int main(){
	struct book b1;
	printf("enter title :");
	scanf("%s",&b1.title);
	printf("enter author :");
	scanf("%s",&b1.author);
	printf("enter publication :");
	scanf("%s",&b1.publication);
	printf("enter price :");
	scanf("%f",&b1.price);
	
	printf("title is =%s\n",b1.title);
	printf("author is =%s\n",b1.author);
	printf("publication is =%s\n",b1.publication);
	printf("price is =%f",b1.price);
}
