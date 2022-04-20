#include<stdio.h>
#include<stdbool.h>

bool search(int arr[],int len, int key)
{
    if(len<0)
    return false;
    else if(arr[len]==key)
    return true;

    return search(arr, len-1, key);
}

int main()
{
    int n,arr[100],key;
    printf("Enter numebr of integers\n");
    scanf("%d",&n);
    printf("Enter the values \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched\n");
    scanf("%d",&key);
    if(search(arr,n-1,key)==true)
    printf("FOUND\n");
    else 
    printf("NOT FOUND\n");
    return 0;
}