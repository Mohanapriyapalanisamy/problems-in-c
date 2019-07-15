/* Eg:1  x=321
         reverse=123
         result=x-reverse=321-123=198
   Eg:2  x=-10
         reverse=-1
         -10-(-1)=-10+1=-9
         we need to print the result in positive.so result=9.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,temp,rem,reverse=0,result;
    printf("Enter number: ");
    scanf("%d",&x);
    temp=x;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=(reverse*10)+rem;
        temp=temp/10;
    }
    printf("\n%d reverse is %d",x,reverse);
    result=abs(x-reverse);
    printf("\nDifference between %d and %d is %d",x,reverse,result);
    return 0;
}
