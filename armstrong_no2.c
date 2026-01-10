//Print armstrong number between 1 to 1000

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,ans,tnum,rem;

	for(num=1; num<=1000; num++)
	{
		tnum=num;
		ans=0;

		while(num>0)
		{
			rem = num % 10;
			ans = ans + (rem* rem* rem);
			num = num / 10;
		}

		if(tnum==ans)
		{
			printf("%d is an armstrong number\n",tnum);
		}

		num=tnum;

	}
	return 0;
}