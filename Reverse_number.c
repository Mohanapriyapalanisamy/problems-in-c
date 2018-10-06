#include<stdio.h>
int main()
{
    int num,remainder,reverse=0,i;
    scanf("%d",&num);
    while(num!=0)
    {
        reverse=reverse*10;
        reverse=reverse+num%10;
        num/=10;
    }
    printf("%d",reverse);

}
