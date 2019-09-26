#include<stdio.h>
int main()
{
	printf("Please Define the sizeof an array\t:");
	int size;
	scanf("%d",&size);

	int UnSortedArray[size];
	printf("Please fill the array elements:\n");
	for(int i=0;i<size;i++)
		scanf("%d",&UnSortedArray[i]);

	for(int i=1;i<size;i++)
	{
		for(int j =0;j<size-1;j++)
		{
			if(UnSortedArray[j]>UnSortedArray[j+1])
			{
				int temp;
				temp = UnSortedArray[j];
				UnSortedArray[j] = UnSortedArray[j+1];
				UnSortedArray[j+1] = temp;
			}
		}
	}

	for(int i=0;i<size;i++)
		printf("%d ",UnSortedArray[i]);
	printf("\n");
}
