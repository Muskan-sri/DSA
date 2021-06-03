/*anticlockwise rotation of an array
muskan kumari c2_08*/
#include<stdio.h>
int main()
{
    int n,i,j,r,last;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter how many rotations:\n");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
       last=arr[0];
       for(j=0;j<n;j++)
       {
           arr[j]=arr[j+1];
       }
       arr[n-1]=last;
    }
    printf("\n The array elements after anti-clockwise rotation are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
        return 0;
}
