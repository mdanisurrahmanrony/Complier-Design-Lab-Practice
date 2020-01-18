#include<stdio.h>

//Keywords are "if","break","for","int","case"


int main()
{

    char keywords[100][100]= {"if","break","for","int","case"};

    freopen("keyword.txt", "r", stdin);

    char s[100], temp[100];

    while(gets(s))
    {

        int i, len=strlen(s), j=0, flag=0;

        for(i=0; i < len; i++)
        {
            if(flag==1)
                break;

            if(s[i]==' ' || i==len-1)
            {
                temp[j]='\0';

//                printf("%s ",temp);

                for(int k=0; k<5; k++)
                {
                    if(strcmp(keywords[k],temp)==0)
                    {
                        flag=1;
                        break;
                    }
                }
                temp[0]='\0';
                j=0;
            }
            else
            {
                temp[j]=s[i];
                j++;
            }

        }

        if(flag)
        {
            printf("Keyword found\n");
        }
        else
        {
            printf("Keyword not found\n");
        }

    }

    return 0;
}
