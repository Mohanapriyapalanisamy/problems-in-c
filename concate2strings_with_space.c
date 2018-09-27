#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double d1;
    char str[100];
    scanf("%d",&j);
    scanf("%lf",&d1);
    scanf("%*[\n]%[^\n]",str);
    printf("%d",i+j);
    printf("\n%.1lf",d+d1);
    printf("\n%s%s",s,str);

    return 0;
}


