#include<stdio.h>
int main()
{
	int ch;
	printf("Enter your choice: 1. Celcius to Fahrenheit to kelvin 2. Fahrenheit to Celcius to kelvin: ",ch);
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:	float c,f,k;
	        printf("Enter the Temperature in celcius: ");
	        scanf("%f",&c);
	        f=1.8*c+32;
	        k=273+c;
        	printf("Equivalent Fahrenheit = %f\n",f);
        	printf("Equivalent Kelvin scale = %f\n",k);
	        break;
	case 2: float f1,c1,k1;
	        printf("\nEnter the temperature in Fahrenheit: ");
	        scanf("%f",&f1);
        	c1=(f1-32)/1.8;
        	k1=273+c1;
	        printf("Equivalent celcius = %f\n",c1);
	        printf("Equivalent Kelvin scale = %f\n",k1);
	        break;
	default: printf("Wrong choice");
    }
	return 0 ;
}
