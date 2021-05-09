//Program to increment in passed value and return the updated value

#include<stdio.h>
int increment(int *);

int main()
{
int a=23;
printf("\nThe value of a is %d \n",a);

int b=increment(&a);
printf("\nThe value of b is %d \n", b);

printf("\nThe value of a is %d \n", a);
return 0;
}

int increment(int *c)
{
*c+=1;
return *c;
}
