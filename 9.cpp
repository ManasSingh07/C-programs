#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,max,MAX;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
   max=a>b?a:b;
   MAX=max>c?max:c;
    printf("Maximum number is:%d",MAX);
    return 0;
}