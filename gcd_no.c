//Accept two numbers from user and find ouy GCD of it

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;

	printf("Enter the value of a:\n");
	scanf("%d",&a);

	printf("Enter the value of b:\n");
	scanf("%d",&b);

	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}

		else
		{
			b=b-a;
		}
	}

	printf("GCD:%d\n",a);

	return 0;
}