#include <stdio.h>
char OperatorAns[100],PuncAns[100];
char KeywordAns[100][100],constant[100][100], identifier[100][100];
char keywords[100][100] = {"if","else","int"};
int j,cnt1,cnt2,cnt3,cnt4,cnt5;
int isOperator(char ch)
{
    if(ch == '=' || ch == '>' || ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}
int isPunc(char ch)
{
    if(ch == ';' || ch == '(' || ch == ')' )
        return 1;
    else
        return 0;
}
int isKeyword(char s[])
{
    int i;
    for( i = 0; i < 3; i++)
    {
        if(strcmp(s,keywords[i]) == 0)
            return 1;
    }

    return 0;
}
int main()
{
    char ch;
    freopen("SimpleLexicalAnalyzer.txt","r",stdin);
    char temp[100];
    while((ch = getchar())!=EOF)
    {
        if(isOperator(ch))
        {
            OperatorAns[cnt1] = ch;
            cnt1++;
        }
        else if(isPunc(ch))
        {
            PuncAns[cnt2] = ch;
            cnt2++;
        }
        else if(ch == ' ')
        {
            temp[j] = '\0';
            if(isKeyword(temp))
            {
                strcpy(KeywordAns[cnt3],temp);
                cnt3++;
            }
            else if(temp[0] >='0' && temp[0] <= '9')
            {
                strcpy(constant[cnt4],temp);
                cnt4++;
            }
            else
            {
                strcpy(identifier[cnt5],temp);
                cnt5++;
            }
//            temp[0] = '\0';
            j = 0;
        }
        else
        {
            temp[j] = ch;
            j++;
        }
    }

    printf("Operators are: %s\n",OperatorAns);
    printf("Punctuations are: %s\n",PuncAns);
//    printf("Keywords are: %s\n",KeywordAns);
    printf("Keywords are: %s\n",KeywordAns);

    return 0;
}


