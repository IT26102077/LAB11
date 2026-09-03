#include<stdio.h>
struct employee_t{

	char name[20];
	char id[10];
	int sallary;





};
int main(){

	struct employee_t e[5];

	for (int i=0;i<5;i++){


	
		printf("Enter the name :");
		scanf("%s",e[i].name);
		printf("Enter the ID :");
		scanf("%s",e[i].id);
		printf("Enter the sallary :");
		scanf("%d",&e[i].sallary);

	
	
	}

	int high=0;
	int emp;
	for(int j=1;j<=5;j++){

		if(high<e[j].sallary){

			high=e[j].sallary;
			emp=j;
		
		
		}

		printf("Name :%s\nID:%s\nSallary:%d",e[emp].name,e[emp].id,e[emp].sallary);
	
	
	
	}

	return 0;





}
