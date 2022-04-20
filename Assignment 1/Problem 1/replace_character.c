#include<stdio.h>

void replace(char *s, char c1, char c2)
{
    if(s[0]=='\0')
    return ;
    if(s[0]==c1)
    s[0]=c2;
    replace(s+1,c1,c2);
}

int main()
{
    char s[100],c1,c2;
    printf("Enter a string\n");
    scanf("%s",s);
    printf("Enter a character to replace with\n");
    scanf(" %c",&c1);
    printf("Enter a character to replace\n");
    scanf(" %c",&c2);
    replace(s,c1,c2);
    printf("%s\n",s);
    return 0;


}