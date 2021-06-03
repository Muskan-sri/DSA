/*find prime numbers*/
#include<stdio.h>
int main()
{
int arr[50],i,j,size,count;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the values");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);

}
for(i=0;i<size;i++)
 {
count=1;
     for(j=2;j<arr[i];j++)
     {
         if(arr[i]%j==0)
         {
             count=0;
             break;
         }
     }
    if (count==1)
      {
    printf("%d are prime numbers  ",arr[i]);
      }
 }
return 0;
}

