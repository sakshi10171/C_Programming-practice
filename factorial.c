//Accept the number from user and print factorial of it

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, num,n;

	printf("Enter the number: \n");
	scanf("%d",&n);

	num=1;
	for(i=1;i<=n;i++)
	{
		num=num*i;
	}

	printf("The factorial of number is: %d\n",num);
	return 0;
}