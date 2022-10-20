//insert a new element in an array
#include<stdio.h>
int main()
{
    int arr[50],range,pos,new,i;
    printf("Enter the range of the array \n");
    scanf("%d",&range);
    // input element
    printf("Enter the element \n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&arr[i]);
    }

    // new element
    printf("enter the new element \n");
    scanf("%d",&new);
    printf("Enter the position of the new element \n");
    scanf("%d",&pos);

    //shifting
    for(i=range;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }

    //impliment
    arr[pos-1]=new;
    range++;

    //display
    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}