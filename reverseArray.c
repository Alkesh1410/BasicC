#include<stdio.h>
int main()
{
	printf("Please define the size of an array\t:");
	int size;
	scanf("%d",&size);

	int array[size];
	printf("Please fill the array elements:\n");
	for(int i=0;i<size;i++)
		scanf("%d",&array[i]);

	for(int i=0;i<size;i++)
		printf("%d ",array[i]);
	printf("\n");

	int end = size-1;
	for(int i =0;i<end;i++,end--)
	{
		int temp;
		temp = array[i];
		array[i] = array[end];
		array[end] = temp;
	}

	printf("reversed array is\t:");
	for(int i=0;i<size;i++)
		printf("%d ",array[i]);
	printf("\n");
}
