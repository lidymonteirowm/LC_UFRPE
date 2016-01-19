#include <stdio.h>
int main ()
{
	float num1,num2,num3;	
	printf ("Digite o 1o numero:");
	scanf ("%f",&num1);
	printf ("Digite o 2o numero: ");
	scanf ("%f",&num2);
	printf ("Digite o 3o numero: ");
	scanf ("%f",&num3);
	
	if (num1<num2 && num1<num3) 
	{
		printf("%.2f \t", num1);
		if (num2<num3) 
		{
			printf("%.2f \t", num2);
			printf("%.2f \t", num3);
		}
		else 
		{
			printf("%.2f \t", num3);
			printf("%.2f \t", num2);
		}
	}
	else if (num2<num1 && num2<num3) 
	{
		printf("%.2f \t", num2);
		if (num1<num3) 
		{
			printf("%.2f \t", num1);
			printf("%.2f \t", num3);
		}
		else 
		{
			printf("%.2f \t", num3);
			printf("%.2f \t", num1);
		}
	}
	else if (num3<num1 && num3<num2) {
		printf("%.2f \t", num3);
		if (num1<num2) 
		{
			printf("%.2f \t", num1);
			printf("%.2f \t", num2);
		}
		else 
		{
			printf("%.2f \t", num2);
			printf("%.2f \t", num1);
		}
		
	}
	return 0;
}