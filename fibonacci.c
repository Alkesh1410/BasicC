#include<stdio.h>
int main()
{
	printf("Please enter the length of Fibonacci\t:");
	int length;
	scanf("%d",&length);

	int first = 0, second = 1;
	int nextValue;

	for (int i = 1; i <=length ; ++i)
	{
		printf("%d ", first);
		nextValue = first + second;
		first = second;
		second = nextValue;
	}
	printf("\n");
}
