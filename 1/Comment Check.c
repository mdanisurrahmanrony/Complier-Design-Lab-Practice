#include<stdio.h>

int main()
{

    char s[100];

    int i, flag=0;

    printf("Enter string to check comments: ");
    gets(s);

    printf("\nGiven string is: %s\n\n",s);

//    freopen("commentCheck.txt", "r", stdin);

//    while(gets(s))
//    {
//        for(i=0; i<strlen(s); i++)
//        {
//            if(s[i]=='/' && s[i+1]=='/')
//            {
//                flag=1;
//            }
//            if(s[i]=='/' && s[i+1]=='*')
//            {
//                flag=1;
//            }
//        }
//    }

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='/' && s[i+1]=='/')
        {
            flag=1;
        }
        if(s[i]=='/' && s[i+1]=='*')
        {
            flag=1;
        }
    }

    if(flag){
        printf("Comment.\n");
    }else{
        printf("No Comment.\n");
    }

    return 0;
}
