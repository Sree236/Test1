#include<stdio.h>
int main()
{
printf("\n Hello, this is the first line of code in Linux \n");
printf("\n Lets do a bubble sort \n");
int a[10]={4,3,2,8,25,84,4,3,65};
printf("\n Size of aray %d \n",sizeof(a));
printf("\n initial values in array are \n");
for (int i=0;i<10;i++)
{
printf("%d \n",a[i]);
}


//sorting starts
for(int i=0;i<10;i++)
{
for(int j=1+i;j<10;j++)
if (a[i]>a[j])
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
//sorting ends


printf("\n sorted values in array are \n");
for (int i=0;i<10;i++)
{
printf("%d \n",a[i]);
}


return 0;
}


