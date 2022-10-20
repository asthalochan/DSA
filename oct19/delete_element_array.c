//delete a element in an array
#include<stdio.h>
void input(int[],int);
void shift (int[],int);
void display(int[],int);
int main()
{
    int arr[50],range;
    printf("Enter the range of the array \n");
    scanf("%d",&range);
    input(arr,range); //call input
    shift (arr,range);
    range--;
    display(arr,range);
    return 0;
}
    // input element
void input(int arr[],int range)
{
    int i;
    printf("Enter the element \n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&arr[i]);
    }
}
    
void shift(int arr[],int range)
{
    int i,pos;

    // new element
    printf("enter the position of the delete element \n");
    scanf("%d",&pos);
    
    //shifting
    for(i=pos;i<=range;i++)
    {

        arr[i-1]=arr[i];
    }

    
}
    

    //display
void display(int arr[],int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }
    
}