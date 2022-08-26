//4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter 10 numbers in array in vertical manner: \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=9;i++)
    {
        if(arr[0]<arr[i])
            arr[0]=arr[i];
    }
    printf("Greatest number in array is %d",arr[0]);
    return 0;
}
