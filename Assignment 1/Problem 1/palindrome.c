#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool palindrome(char s[], int first, int last)
{
    if(first>=last)
    return true;
    
    
    return s[first]==s[last]&&palindrome(s,first++,last--);
}

int main()
{
    char s[100];
    printf("Enter a string\n");
    scanf("%s",s);
    int len=strlen(s);
    //if(palindrome(s,0,strlen(s)-1)==true)
    printf("%d\n",palindrome(s,0,len-1));
    
    return 0;
}
