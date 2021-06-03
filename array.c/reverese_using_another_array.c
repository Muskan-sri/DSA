/*reverse an array by using another array
MUSKAN KUMARI C2_08*/
#include<stdio.h>
int main()
{
int arr[50],rev[50],j,size,i;
printf("entyer thye size of the array");
scanf("%d",&size);
printf("enter thye elements of the array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("the elements of array after reversing are \n");
for(j=size-1;j>=0;j--)
{
rev[j]=arr[j];
printf("%d\t",rev[j]);
}

return 0;
}

