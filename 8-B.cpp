#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter number a and b:\n");
    scanf("%d%d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("now after swapping a=%d and b=%d",a,b);
    return 0;
}
