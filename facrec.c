#include<stdio.h>
int fact(int);
int main()
{
	int a=7,b;
	b= fact(a);
	printf("%d",b);
	return 0;
}
int fact(int x)
{
	if(x==0||x==1)
		return 1;
	else
		return x*fact(x-1);
}
