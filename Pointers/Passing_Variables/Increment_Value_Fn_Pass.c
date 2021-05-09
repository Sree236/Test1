//Program to increment in passed value and return the updated value

#include<stdio.h>
int increment(int);
int main()
{

int a=23;
printf("\nThe value of a is %d ",a);
int b=increment(a);
printf("\nThe value of a is %d", b);

return 0;
}

int increment(int a)
{
return a+1;
}
