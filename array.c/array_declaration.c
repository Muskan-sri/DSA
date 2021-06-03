/*WAP to declare an array enter value and display it .
muskan kumari C2_08*/
#include<stdio.h>
int main()
{
    int arr[40],size,index;
    printf("enter how many blocks you want:");
    scanf("%d",&size);
    printf("enter thye value");
    for(index=0;index<size;index++)
    {


        scanf("%d",&arr[index]);

    }
    printf("\nvalues are\n");
    for(index=0;index<size;index++)
    {

        printf("%d\t",arr[index]);

    }


return 0;
}
