//Accept the number and prin if n=5 then O/P: 0 2 4   if n=10 then O/P:0 2 4 6 8 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;

	printf("Enter the value of n:");
	scanf("%d",&n);

	for(int i=0;i<=n;i=i+2)
	{
			printf("%d\t",i);

	}
	return 0;
}