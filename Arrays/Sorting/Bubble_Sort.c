#include<stdio.h>
#include<stdint.h> //using the uint8, uint32 etc
//int averagefn(int arr,int number)

int printfn(uint8_t arr[], uint8_t length);
int main()
{

uint8_t array[]={3,3,1,7,2,5,2,4,8,9,3,4,7,1,0,3,5,7,7,2,12,3,2,1,0,4,5,9,8,7,4,5,1};
uint8_t n1=sizeof(array);
//int n2=sizeof(uint32_array[]);
uint8_t n3=sizeof(array[0]);
printf("Array Length= %d \n",n1);  //output size of array in bytes
//printf("Array Length= %d \n",n2);
printf("Array Length= %d \n",n3);  //output size of one element in byte
uint8_t n4=n1/n3;  			   //sizeof array as number of elements
printf("Array Length= %d \n",n4); 
//printf("uint8 Length= %d \n",sizeof(n1));

printf("\nThe array is: \n");
printfn(array, n1);

for(int i=0;i<n1;i++)
for(int j=i+1;j<n1;j++)
{
if (array[i]<array[j])
{
int temp= array[i];
array[i]=array[j];
array[j]=temp;
}
}

printf("\nThe sorted array is: \n");
printfn(array, n1);


return 0;
}

int printfn(uint8_t arr[], uint8_t length)
{

for(int i=0;i<length;i++)
printf("%d,",arr[i]);
printf("\n");
return 0;

}


