#include<stdio.h>

#include "module.h"

#include<string.h>

int main()
{
   
    int choice;
   
    printf("Enter choice, 1 for 'STRING COMPARE', 2 for 'LARGEST NUMBER', 3 for 'SEARCHING A NUMBER FROM THE LIST', 4 for 'PRINTING A NUMBER IN REVERSE ORDER', 5 for 'CHECKING PALINDROME STRINGS', 6 for 'REPLACING A CHARACTER BY ANOTHER ONE' and 7 for 'SORTING A LIST OF INTEGERS IN ASCENDING ORDER'\n");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:
        {
            char s1[100],s2[100];
            printf("Enter two strings\n");
            scanf("%s",s1);
            scanf("%s",s2);
            if(strcomp(s1,s2)==0)
            printf("String same\n");
            else if(strcomp(s1,s2)==1)
            printf("First string comes after second string\n");
            else
            printf("First string comes before second string\n");

        
             break;
        }

        case 2:
        {
    
            int n,num[100];
            printf("Enter number of integers\n");
            scanf("%d",&n);
            printf("Enter the values\n");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&num[i]);
            }
            printf("Largest Number is %d\n",largest_number(num, n));
            break;
        }

        case 3:
        {
    
            int n,num[100],key;
            printf("Enter number of integers\n");
            scanf("%d",&n);
            printf("Enter the values\n");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&num[i]);
            }
            printf("Enter the key \n");
            scanf("%d",&key);
            if(search(num,n-1,key)==1)
            printf("FOUND\n");
            else
            printf("NOT FOUND\n");
            break;
        }

        case 4:
        {
            int n,num[100];
            printf("Enter number of integers\n");
            scanf("%d",&n);
            printf("Enter the values\n");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&num[i]);
            }
            printf("REVERSE ORDER\n");
            reverse(num, n);
            break;
        }

        case 5:
        {   
    
            char s[100];
            printf("Enter a string\n");
            scanf("%s",s);
            if(palindrome(s,0,strlen(s)-1)==1)
            printf("Palindrome\n");
            else
            printf("Not palindrome\n");
            break;
        }

        case 6:
        {
            char sa[100];
            char c1,c2;
            printf("Enter a string\n");
            scanf("%s",sa);
            printf("Enter a character to replace\n");
            scanf(" %c",&c1);
            printf("Enter a character to get replaced with\n");
            scanf(" %c",&c2);

            replace(sa,c1,c2);
            printf("%s\n", sa);
            break;
        }

        case 7:
        {
            int n,num[100];
            printf("Enter number of integers\n");
            scanf("%d",&n);
            printf("Enter the values\n");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&num[i]);
            } 
            sort(num, n);
            printf("In ASCEDNING ORDER\n");
            for (int i = 0; i < n; i++) {
            
                printf("%d ", num[i]);
            }
            break;
        }

        default: printf("Invalid Choice\n");
    }
    
    return 0;
}
