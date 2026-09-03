#include<stdio.h>

struct book_t{
	char title[10];
	char author[10];
	int pages;


};

void book (struct book_t b1){
	printf("Enter the Book title :");
	scanf("%s",b1.title);
	printf("Enter the Book Author :");
	scanf("%s",b1.author);
	printf("Enter the number of pages :");
	scanf("%d",&b1.pages);
	printf("Book title :%s\n",b1.title);
	printf("Book Author :%s \n",b1.author);
	printf("Number of pages :%d \n",b1.pages);



}

int main(){

	struct book_t b1;
	book(b1);

	return 0;










}
