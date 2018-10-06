#include<stdio.h>
int main()
{
    int num,count=0,binary=0,rem,base=1;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        binary=binary+rem*base;
        base*=10;
        num/=2;
    }
    printf("%d",binary);
}

