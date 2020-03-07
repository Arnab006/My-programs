#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n,i,j,m;
	scanf("%d",&n);
	m=2*n-2;
	int arr[m+1][m+1];
	for(i=0;i<=m;i++)
	{
		for(j=i;j<=m-i;j++)
		{
		arr[i][j]=n;
	    }
		for(j=i+1;j<=m-i;j++)
		{
		arr[j][m-i]=n;
	    }
		for(j=m-i;j>=i;j--)
		{
		arr[m-i][j]=n;
	    }
		for(j=m-j-1;j>i;j--)
		{
		arr[j][i]=n;
	    }
		n--;
	}
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=m;j++)
     	printf("%d ",arr[i][j]);
     	printf("\n");
     }

    
  	// Complete the code to print the pattern.
    return 0;
}
