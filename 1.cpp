#include<stdio.h>
int
main () 
{
  
char op;
  
int a, b;
  
printf ("Enter arithmatic operation= ");
  
scanf ("%c", &op);
  
printf ("Enter number A= ");
  
scanf ("%d", &a);
  
printf ("Enter number B= ");
  
scanf ("%d", &b);
  
switch (op)
    
    {
    
case '+':
      
printf ("A+B= %d\n", a + b);
      
break;
    
case '-':
      
printf ("A-B= %d\n", a - b);
      
break;
    
case '*':
      
printf ("A*B= %d\n", a * b);
      
break;
    
case '/':
      
printf ("A/B= %d\n", a / b);
      
break;
    
default:
      
printf ("Invalid");
    
}
  
return 0;

}

