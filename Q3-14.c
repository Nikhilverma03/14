//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int arr[10],i,sumeven=0,sumodd=0;
    printf("Enter 10 numbers in an array: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sumeven=sumeven+arr[i];
        else
            sumodd=sumodd+arr[i];
    }
    printf("Sum of even numbers in arrays is %d\n",sumeven);
    printf("Sum of odd numbers in arrays is %d\n",sumodd);
    return 0;
}
