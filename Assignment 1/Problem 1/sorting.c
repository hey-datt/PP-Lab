#include<stdio.h>

int largest_number_position(int *arr,int n)
{
    if(n==1)
    return 0;
    int largest_position= largest_number_position(arr,n-1);
    if(arr[n-1]>arr[largest_position])
    return n-1;
    else
    return largest_position;
}

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int *arr, int n)
{
    if(n==1)
    return;
    int position;
    position=largest_number_position(arr,n);
    swap(&arr[position],&arr[n-1]);
    sort(arr,n-1);
}

int main()
{
    int arr[100],n,i;
    printf("Enter number of integers\n");
    scanf("%d",&n);
    printf("Enter the integers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("ASCENDING ORDER\n");
    for(i=0;i<n;i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}

