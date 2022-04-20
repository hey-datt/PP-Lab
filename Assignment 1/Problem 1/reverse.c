#include<stdio.h>
 void reverse(int arr[], int n)
 {
     
     if(n<=0)
     return ;
     printf("%d \n",arr[n-1]);
     reverse(arr,n-1);
 }

 int main()
 {
     int arr[]={1,2,3,4,5};
     reverse(arr,5);
     return 0;
 }