//2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],i;
    float sum=0,average=0;
    printf("Enter 10 numbers in an array: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    average=sum/10;
    printf("Average of 10 numbers in arrays is %.2f",average);
    return 0;
}
