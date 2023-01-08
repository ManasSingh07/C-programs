#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter cost per units and no. of unit consumed:\n");
    scanf("%d%d",&a,&b);
    c= a*b;
    printf("Electricity Bill is:%d Rs",c);
    return 0;
}