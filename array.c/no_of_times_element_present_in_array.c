/*WAP to show how many timesan element is repeated  and in which index an element is present
C2_08_MUSKAN_KUMARI*/
#include<stdio.h>
int main()
{
int arr[50],size,i,element,flag=0,repeat=0;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the value");
for(i=0;i<size;i++)
{

    scanf("%d",&arr[i]);

}
printf("enter the value you want to search:");
scanf("%d",&element);
for(i=0;i<size;i++)
{

    if(arr[i]==element)
    {
       printf("key  is find in the index %d of array\n",i);
        flag=1;
        repeat++;
          }
}
    if(flag==0)
    {

        printf("element is not found ");
    }

 else
 {
     printf("\nthe element is found and it is repeated %d\ttimes in the array",repeat);

}


return 0;

}
