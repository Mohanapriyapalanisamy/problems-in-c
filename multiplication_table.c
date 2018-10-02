#include <stdio.h>

int main()
{
    int number,i,answer;
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        answer=number*i;
        printf("%d x %d = %d",number,i,answer);
        printf("\n");
    }
   return 0;
}




