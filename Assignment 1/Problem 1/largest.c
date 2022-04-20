#include<stdio.h>
int largest_number(int *arr,int n)
{
    if(n==1)
    return arr[0];
    int largest= largest_number(arr,n-1);
    
    if(arr[n-1]>largest)
    return arr[n-1];
    else
    return largest;
}

    
int main()
{
    int arr[100],n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Largest number is %d\n",largest_number(arr,n));
    return 0;

}