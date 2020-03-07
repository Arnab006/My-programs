#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int i,k=400,p=3;
	for(i=0;i<5;i++)
	{
		if(i==p)
		{
			arr[i]=k;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
	return 0;
}
