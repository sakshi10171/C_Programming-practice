//C Program to print fibonacci series

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,f1,f2,f3;

	printf("Enter how many numbers you want to print:\n");
	scanf("%d",&n);

	if(n==1)
	{
		printf("1");
		exit(0);
	}

	f1=1;
	f2=1;

	printf("1 1 ");

	for(i=1; i<=n-2; i++)
	{
		f3=f1+f2;

		printf("%d\t",f3);

		f1=f2;

		f2=f3;
	}

	return 0;
}