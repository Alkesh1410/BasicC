#include<stdio.h>
int main()
{
	printf("Please enter the number\t:");
	int number;
	scanf("%d",&number);
	int count = 0;

	while(number)
	{
		number = number & (number-1);
		count++;
	}
	printf("Number of set bits are %d\n",count);
}
