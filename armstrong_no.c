//Accept the number from user and check whether it is armstrong or not


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,tnum,ans,rem;

	printf("Enter the number: ");
	scanf("%d",&num);

	tnum=num;

	ans=0;

	while(num>0)
	{
		rem= num%10;
		ans=ans+(rem * rem *rem);
		num=num/10;
	}

	if(tnum==ans)
	{
		printf("%d is an armstrong number\n",tnum);
	}

	else
	{
		printf("%d is not an armstrong number\n",tnum);
	}

	return 0;
}