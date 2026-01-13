//Accept number from user & check whether it is perfect number or not
//eg: num=6 then we can print 1 2 3 4 5 divisor's of 6 are 1 2 3 it's sum is 6 


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,ans;

	printf("Enter the value of number:");
	scanf("%d",&num);

	ans=0;

	for(int i=1; i<num; i++)
	{
		if(num%i==0)
		{
			ans= ans+i;
		}
	}

	if(ans==num)
	{
		printf("%d is a perfect number!!",num);
	}

	else
	{
		printf("%d is not a perfect number!!",num);
	}

	return 0;
}