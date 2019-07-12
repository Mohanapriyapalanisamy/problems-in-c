#include<stdio.h>
int main()
{
    int a=2,b=1,c,n,i;
    printf("Enter the number of terms for Lucas series: ");
    scanf("%d",&n);
    printf("The Lucas series for %d is:",n);
    if(n==1)
        printf("\n%d",a);
    else if(n==2)
    {
        printf("\n%d",a);
        printf("\n%d",b);
    }
    else if(n>2)
    {
       printf("\n%d",a);
       printf("\n%d",b);
       for(i=0;i<n-2;i++)
       {
           c=a+b;
           printf("\n%d",c);
           a=b;
           b=c;
       }
    }
    return 0;
}
