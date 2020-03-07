#include<stdio.h>
int fibo(int);
int main()
{
	int a,b;
	printf("Enter the Number:");
	scanf("%d",&a);
	b= fibo(a);
	printf("%d",b);
	return 0;
}
int fibo(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return fibo(n-2)+fibo(n-1);
}
