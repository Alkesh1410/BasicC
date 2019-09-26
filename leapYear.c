#include<stdio.h>
int isLeapYear(int);
int main()
{
	printf("Please enter the year\t:");
	int year;
	scanf("%d",&year);

	if(isLeapYear(year))
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);
}
int isLeapYear(int y)
{
	if(y%400 == 0)
		return 1;
	if(y%100 == 0)
		return 0;
	if(y%4 == 0)
		return 1;

	return 0;
}
