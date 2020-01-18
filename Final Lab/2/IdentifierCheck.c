#include<stdio.h>
#include<stdio.h>

int main()
{

    char s[100];

    printf("Enter the string to check valid identifier:\n");

    gets(s);

    printf("Inputted string is:\n");

    puts(s);

    int len = strlen(s), count=1, flag=0;

    if(s[0]>='a' && s[0]<='z' || s[0]>='A' && s[0]<='Z' || s[0]=='_')
    {
        for(int i=1; i<len; i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9' || s[i]=='_')
            {
                count++;
            }
        }

        if(len==count)
        {
            flag=1;
        }

    }
    else
    {
        flag=0;
    }

    if(flag)
    {
        printf("Identifier.\n");
    }
    else
    {
        printf("Not Identifier.\n");
    }

    return 0;
}
