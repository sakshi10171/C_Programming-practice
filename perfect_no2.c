//Print all the perfect no from 1 to 100

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,ans;

	printf("Perfect numbers are:\n");
	
	for(num=1; num<=100; num++)
	{
		ans=0;

		for(int i=1;i<num;i++)
		{
			if(num%i==0)
			{
				ans = ans+i;
			}
		}

		if(ans==num)
		{
			printf("%d\n",num);
		}

	
	}

	return 0;
}