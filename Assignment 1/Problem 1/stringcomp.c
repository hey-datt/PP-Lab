#include<stdio.h>

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

int main()
{
    char s1[100],s2[100];
    printf("Enter a string\n");
    scanf("%s",s1);
    printf("Enter another string\n");
    scanf("%s",s2);

    printf("%d\n ",strcomp(s1,s2));
    return 0;
}