#include<stdio.h>
int main()
{
	int arr[5]={78,90,54,70,-50};
	
	int a,b,temp=0;
	
	for(a=0;a<5;a++)
	{
		for(b=0;b<5;b++)
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