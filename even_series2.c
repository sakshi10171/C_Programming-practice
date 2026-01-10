//Accept the number from user and print even series from it eg:n=5 then O/P:0 2 4

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;

	printf("Enter the value of n: ");
	scanf("%d",&n);

	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}

	return 0;
}