#include<stdio.h>
#include<string.h>

int main()
{

    char s[100];
    char keyword[5][100]= {"if","else","int","for","main"};

    int count = sizeof(keyword)/sizeof(keyword[0]);

    printf("%d\n\nGiven Keywords are: \n\n",count);

    for(int i=0; i<count; i++)
    {
        printf("%s \n",keyword[i]);
    }

    printf("\n\n");

    freopen("keywordCheck.txt", "r", stdin);
//    printf("\nStrings in the file are:\n\n");

    while(gets(s))
    {
        int i,len=strlen(s),flag=0,j=0;
        char temp[100];
        for(i=0; i<=len; i++)
        {

            if(s[i]==' ' || i==len)
            {
                temp[j]='\0';

//                printf("%s ",temp);

                for(int k=0; k<count; k++)
                {
                    if(strcmp(keyword[k],temp)==0)
                    {
//                        printf("%s ",temp);
                        flag=1;
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
            printf("Keyword found.\n");
        }
        else
        {
            printf("Keyword not found.\n");
        }
    }

    printf("\n");

    return 0;
}
