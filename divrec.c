#include<stdio.h>
int div(int,int,int);
int main()
{
	int a=30,b=30,c,d=0;
	c=div(a,b,d);
	printf("%d",c);
	return 0;
}
int div(int x,int y,int z)
{
	if(x<y)
		return 0;
	else 
		return div(x-y,y,++z);	
}
