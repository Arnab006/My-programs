#include<stdio.h>
int main ()
{
	int a,b;float c;
	printf("Enter a number: ");
	scanf("%d %d",&a,&b);
	if(b==0)
	{
		printf("Division not possible");
		
	}
	else
	{
		c=(float)a/b;
		printf("%f",c);
	}
	return 0;
}
