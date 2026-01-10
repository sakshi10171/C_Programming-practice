//Accept the number and count the number of digits in it

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,count=0;

	printf("Enter the number:");
	scanf("%d",&num);

	if(num==0)
	{
		count=1;
	}

	else
	{
		if(num<0)
			num=-num;

		while(num!=0)
		{
			num = num / 10;
			count++;
		}
	}

	printf("The number of digits:%d\n",count);

	return 0;
}