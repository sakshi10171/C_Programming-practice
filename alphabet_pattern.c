//Pattern
//ABCD
//ABCD
//ABCD
//ABCD

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;

	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
		{
			printf("c",j+64);
		}
		printf("\n");
	}

	return 0;
}