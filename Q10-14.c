//10. Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],a[10],i;
    printf("Enter 10 numbers in array in vertical manner:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        a[i]=arr[i];
        printf("%d ",a[i]);
    }
    return 0;
}

