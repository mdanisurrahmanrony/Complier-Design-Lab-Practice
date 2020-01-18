#include<stdio.h>

int main()
{

    char s[100];

    int i, flag=0, count=1;

    printf("Enter a string to check whether it is identifier or not:\n");

    scanf("%s",s);

    int len= strlen(s);

    printf("\nSize of the string is: %d\n\n", len);

    //gets(s);

    printf("The string is: %s\n\n",s);

    if((s[0]>='A' && s[0]<='Z') || (s[0]>='a' && s[0]<='z') || (s[0]=='_'))
    {

        for(i=1; i<len; i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || (s[i]=='_'))
            {
                count++;
            }
        }

        if(count==len)
        {
            flag=1;
        }

    }
    else
    {
        flag=0;
    }

    if(flag==1)
    {
        printf("%s is a valid identifier.\n",s);
    }
    else if(flag==0)
    {
        printf("%s is not a valid identifier.\n",s);
    }

    return 0;
}
