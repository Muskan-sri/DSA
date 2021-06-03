/*clockwise rotation of an array*/
#include<stdio.h>
int main()
{
    int n,i,j,r,last;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter how many rotations:\n");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
       last=arr[n-1];
       for(j=n-1;j>0;j--)
       {
           arr[j]=arr[j-1];
       }
       arr[0]=last;
    }
    printf("\n The array elements after clockwise rotation are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
        return 0;
}
