#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int max=arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximum element in the array: %d\n", max);
    return 0;
}