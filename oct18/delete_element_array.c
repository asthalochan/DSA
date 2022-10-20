//delete a element in an array
#include<stdio.h>
int main()
{
    int arr[50],range,pos,i;
    printf("Enter the range of the array \n");
    scanf("%d",&range);
    // input element
    printf("Enter the element \n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&arr[i]);
    }

    // new element
    
    printf("Enter the position of the delete element \n");
    scanf("%d",&pos);

    //shifting
    for(i=pos-1;i<=range;i++)
    {
        arr[i-1]=arr[i];
    }

    
    range--;

    //display
    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}