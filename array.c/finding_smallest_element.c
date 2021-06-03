/*wap to find the smallent element from the array*/
#include<stdio.h>
int main()
{
    int arr[50],i,size,min;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("Enter the value: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
min=arr[0];
    for(i=0;i<size;i++)
    {

       if( arr[i]<min)
        min=arr[i];

}
    printf("the smallest element is %d",min);


return 0;

}
