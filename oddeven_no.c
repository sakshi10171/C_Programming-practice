//Accept number from user and print count of even and odd numbers from it

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,num,ecnt,ocnt;

	printf("How many times:");
	scanf("%d",&n);

	ocnt=0;
	ecnt=0;

	for(i=1;i<=n;i++)
	{
		printf("Enter the numbers:\n");
		scanf("%d",&num);

		if(num%2==0)
		{
			ecnt++;
		}
		else
		{
			ocnt++;
		}
	}
	printf("Count for even numbers:%d\n",ecnt);
	printf("Count for odd numbers:%d\n",ocnt);

	return 0;
}