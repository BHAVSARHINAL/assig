#include<stdio.h>
int main()
{
	int arr[5]={23,45,76,89,-43};
	
	int a,b,temp=0;
	
	for(a=0;a<5;a++)
	{
		for(b=a+1;b<5;b++)
		{
			if(arr[a]>arr[b])
			
			{
				temp=arr[a];
				arr[a]=arr[b];
				arr[b]=temp;
			}
		}
		
		
	}
	for(a=0;a<5;a++)
	{
		printf("%d ",arr[a]);
	}
	return 0;
}