//Print all prime numbers from 1 to 100

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,num;

	for(num=1;num<=100;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				break;
			}
		}

		if(i==num)
		{
			printf("%d is a prime number\n",num);
		}

		else
		{
			printf("%d is not a prime number\n",num);
		}
	}

	return 0;
}