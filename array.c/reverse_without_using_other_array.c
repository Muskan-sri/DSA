/*reverse an array without using another array
MUSKAN KUMARI C2_08*/
#include<stdio.h>
int main()
{
int arr[50],size,i;
printf("entyer thye size of the array");
scanf("%d",&size);
printf("enter thye elements of the array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("the elements of array after reversing are \n");
for(i=size-1;i>=0;i--)
{
printf("%d\t",arr[i]);
}
return 0;
}

