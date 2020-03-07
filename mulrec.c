#include<stdio.h>
int mul(int,int);
int main()
{
	int a=5,b=3,c;
	c= mul(a,b);
	printf("%d",c);
	return 0;
}
int mul(int x,int y)
{
	if(y==0)
		return 0;
	else
		return x+mul(x,y-1);	
}
