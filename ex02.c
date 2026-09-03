#include<stdio.h>
struct rectangle_t{
	float width;
	float height;




};

void rectangel(struct rectangle_t *ptr){

	printf("Enter width :");
	scanf("%f",&ptr->width);
	printf("Enter the height :");
	scanf("%f",&ptr->height);




}



int main(){

	struct rectangle_t r1;
	struct rectangle_t *ptr=&r1;
	rectangel(ptr);




}

