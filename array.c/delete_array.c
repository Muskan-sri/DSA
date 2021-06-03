/*wap to delete an element in an array*/
#include<stdio.h>
int main()
{
int arr[50],size,i,element,pos;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the value");
for(i=0;i<size;i++)
{

    scanf("%d",&arr[i]);

}
printf("the elements berore inserting are \n");
for(i=0;i<size;i++)
{

    printf("%d\t",arr[i]);

}

printf("\nenter the position in which you want to deleat\n");
scanf("%d",&pos);
//here pos does not mean index
if(pos<=0||pos>size)
{

    printf("invalid position");

}
else{
for(i=pos-1;i<size-1;i++)
{

    arr[i]=arr[i+1];

}

size--;
}

printf("the array after deletion are\n");
for(i=0;i<size;i++)
{

    printf("%d\t",arr[i]);

}
return 0;
}
