#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter number a and b:\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("now after swapping a=%d and b=%d",a,b);
    return 0;
}