//8. Write a program to find the second smallest number in an array.Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;
    printf("Enter 10 unsorted numbers in array: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<=9;i++)
        printf("%d ",arr[i]);
    printf("\nSecond smallest number in array is %d",arr[i-9]);
    return 0;
}

