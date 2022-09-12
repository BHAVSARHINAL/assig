#include<stdio.h>
union person 
{
	int age;
	char name[20];
	float salery;
};


int main()
{
	
	union person p;
	
	scanf("%d",&p.age);
	printf("age=%d\n",p.age);
	scanf("%s",&p.name);
	printf("name=%s\n",p.name);
	scanf("%f",&p.salery);
	printf("slery=%.1f\n",p.salery);
	
	
	return 0;
	
	
	
}