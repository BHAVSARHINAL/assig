#include<stdio.h>
struct person
{
	
	
	int age;
	char name[30];
	float salery;
	
};

  int main()
{
	struct person p;
	
	scanf("%d",&p.age);
		
	scanf("%s",&p.name);
	
	scanf("%f",&p.salery);
	
	
	printf("age=%d\n",p.age);
	printf("name=%s\n",p.name);
	printf("slery=%f\n",p.salery);
	
	return 0;
}