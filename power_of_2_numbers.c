/*This program used to find the count and sum of elements which are power of 2 in the given input.
eg: n=5
   1 2 3 4 5
   power of 2 elements: 1 2 4
   count=3
   sum=7
Explanation:
  2^0=1
  2^1=2
  2^2=4*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,k=0,i,sum=0,count=0,arr1[100],arr2[100],j;
    printf("Enter the no.of elements : ");
    scanf("%d",&n);
    printf("\nEnter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=30;j++)//exponent from 0 to 30
        {
            if((pow(2,j))==arr1[i])
            {
                arr2[k]=arr1[i];
                count++;
                k++;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        sum+=arr2[i];
    }
    printf("\nThe power of 2 elements is ");
    for(i=0;i<k;i++)
    {
        printf("\n%d",arr2[i]);
    }
    printf("\nThe count is : %d",count);
    printf("\nThe sum is : %d",sum);
}

