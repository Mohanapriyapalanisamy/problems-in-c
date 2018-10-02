#include <stdio.h>
int main()
{
    int i,number;
    int array[1000];
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=number-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
    return 0;
}


