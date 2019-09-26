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

	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(UnSortedArray[i]>UnSortedArray[j])
			{
				int temp;
				temp = UnSortedArray[i];
				UnSortedArray[i] = UnSortedArray[j];
				UnSortedArray[j] = temp;
			}
		}
	}

	for(int i=0;i<size;i++)
		printf("%d ",UnSortedArray[i]);
	printf("\n");
}
