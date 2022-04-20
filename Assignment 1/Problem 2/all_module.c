#include<stdio.h>


static int largest_number_position(int*,int);
static void swap(int*,int*);
 //String Compare
int strcomp(char *s1, char *s2)
{
    if(s1[0]=='\0' && s2[0]=='\0')
    return 0;
    if(s1[0]!=s2[0])
    {
        if(s1[0]>s2[0])
        return 1;
        else if(s1[0]<s2[0])
        return -1;
    }
    
    return strcomp(s1+1,s2+1);
}

//Largest Number
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

//Search
int search(int arr[],int len, int key)
{
    if(len<0)
    return 0;
    else if(arr[len]==key)
    return 1;

    return search(arr, len-1, key);
}

//Reverse
 void reverse(int arr[], int n)
 {
     
     if(n<=0)
     return ;
     printf("%d \n",arr[n-1]);
     reverse(arr,n-1);
 }

//Palindrome
 int palindrome(char s[], int first, int last)
{
    if(first>=last)
    return 1;
    
    return s[first]==s[last]&&palindrome(s,first+1,last-1);
}

//Replace
void replace(char *s, char c1, char c2)
{
    if(s[0]=='\0')
    return ;
    if(s[0]==c1)
    s[0]=c2;
    replace(s+1,c1,c2);
}


//Sorting
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