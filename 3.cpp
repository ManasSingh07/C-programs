
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two angles");
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf("Third angle of triangle is:%d",c);
    return 0;
}
