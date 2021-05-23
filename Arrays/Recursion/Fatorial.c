#include<stdint>

int fact(int var);

int main()
{
uint8_t var_a;
var_a=3;

uint8_t fact_ans;
fact_ans=fact(var_a);
printf("The number is %d \n", var_a);
printf("The factorial is %d \n", fact_ans);
return 0
}

int fact(int var)
{

if ((var-1)!=1)
result=var*fact(var-1);

return result;
}
