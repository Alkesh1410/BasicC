#include <stdio.h>
int main()
{
    printf("Please enter the number\t:");
    int number;
    scanf("%d",&number);
    
    for(int i = (sizeof(int)*8)-1 ; i>=0 ; i--)
        printf("%d ",(number>>i)&1);
    printf("\n");
    
    int i,j;
    for( i=(sizeof(int)*8)-1,j = i-1; j>=0 ; i=i-2,j=j-2 )
           if( ((number>>i)&1) != ((number>>j)&1) )
           {
                number = number^(1<<i);
                number = number^(1<<j);
           }

    for(int i = (sizeof(int)*8)-1 ; i>=0 ; i--)
        printf("%d ",(number>>i)&1);
    printf("\n");
    return 0;
}
