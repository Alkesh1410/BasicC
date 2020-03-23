// Alkesh Shah

#include <stdio.h>
void main()
{
    int i, j, number[30];
    printf("Enter all six numbers seperated by a blank space:\n\tFor eg: 14 41 23 19 50 46\n");
    for (i = 0; i < 6; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < 6; ++i) 
    {
        for (j = i + 1; j < 6; ++j)
        {
            if (number[i] <= number[j]) 
            {
                int a;
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    int total = 0;
    printf("Highest four numbers are:\n");
    for (i = 0; i < 4; ++i)
        printf("%d\t",number[i]);
    printf("\n");

    for (i = 0; i < 4; ++i)
        total = total + number[i];
        
    printf("Sum of first four numbers is %d\n",total);
}
