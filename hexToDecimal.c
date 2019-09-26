#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Please enter the number in hex\t:");
	char number[7];
	scanf("%s",number);
	
	int length = strlen(number) - 1;
	int newNumber = atoi(number);
	int decimalValue = 0;

	for(int i=0; number[i]; i++)
	{
		int value;
		if(number[i]>='0' && number[i]<='9')
			value = number[i] - 48;
		else if(number[i]>='a' && number[i]<='f')
			value = number[i] - 97 + 10;
		else if(number[i]>='A' && number[i]<='F')
			value = number[i] - 65 + 10;

		decimalValue += value * pow(16, length);
		length--;
	}
	printf("The converted value for entered hex number is %d\n",decimalValue);

	return 0;
}
