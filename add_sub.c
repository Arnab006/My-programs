#include <stdio.h>
int main()
{
	int a,b,sum=0,dif=0;
    float c,d,sum2=0,dif2=0;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    sum=a+b;
    dif=a-b;
    sum2=c+d;
    dif2=c-d;
    printf("%d %d",sum,dif);
    printf("\n%.1f %.1f",sum2,dif2); 
    return 0;
}
