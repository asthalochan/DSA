//insert a new element in an array and display it using function
#include<stdio.h>
void input(int[],int);
void shift (int[],int);
void display(int[],int);
main()
{
    int arr[50],range;
    printf("Enter the range of the array \n");
    scanf("%d",&range);
    input(arr,range); //call input
    shift (arr,range);
    range++;
    display(arr,range);

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
    int i,new,pos;

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