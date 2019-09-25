#include<stdio.h>
int computeFibonacci(int);
int main()
{
	printf("Please enter the length of fibonacci\t:");
	int length;
	scanf("%d",&length);

	if(length < 0)
		printf("Can not compute fibonacci in opposite direction");
	else
		for(int i = 0; i<length; i++)
			printf("%d ",computeFibonacci(i));
	
	printf("\n");
	return 0;
}

int computeFibonacci(int number)
{
	if (number == 0)
		return 0;
	else if (number == 1)
		return 1;
	else
		return computeFibonacci(number-1) + computeFibonacci(number-2);
}
