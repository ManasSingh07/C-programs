#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    printf("Enter number of days ");
    scanf("%d",&a);
   c=a/365;
   d=a%365;
   e=d/7;
   f=d%7;
   printf("%d years %d weeks %d days",c,e,f);
    return 0;
}
