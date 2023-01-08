#include<stdio.h>
int main()
{
    float a,b,c,d,percent,sum,average;
    printf("Enter your marks here");
    scanf("&f &f &f &f &f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    average=(a+b+c+d)/5;
    percent=(a+b+c+d+e)/5;
    printf("Sum=%d",sum);
    printf("average=%d",average);
    printf("percent=%d",percent);
    if(100>=percent>=85)
    printf("Grade A");
    else if(85>percent>=70)
    printf("Grade B");
    else if(70>percent>=55)
    printf("Grade C");
    else if(55>percent>=40)
    printf("Grade D");
    else if(40>percent>=0)
    printf("Grade E");
    else 
    printf("Enter Valid Marks");
    return 0;
}