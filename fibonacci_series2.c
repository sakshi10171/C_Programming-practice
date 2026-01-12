//C Program to print Fibonacci Series (Alternate Method)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,f1,f2,f3;

	printf("How many numbers you want to print:");
	scanf("%d",&n);

	if(n==1)
	{
		printf("1");
		exit(0);
	}

	f1=1;
	f2=0;

	for(i=1;i<=n;i++)
	{
		f3=f1+f2;
		printf("%d\t",f3);
		f1=f2;
		f2=f3;
	}

	return 0;

}
