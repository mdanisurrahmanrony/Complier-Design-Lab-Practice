#include<stdio.h>
#include<string.h>

char keywordAns[100][100], identifierAns[100][100], punctuationAns[100], operatorAns[100],  constantAns[100];
int cnt1=0, cnt2=0, cnt3=0, cnt4=0, cnt5=0;
char keywords[100][100]= {"if", "else", "int"};

int isOperator(char ch)
{
    if(ch=='+' || ch=='-' || ch=='=' || ch=='>')
    {
        return 1;
    }
    else
        return 0;
}

int isPunctuation(char ch)
{
    if(ch==';' || ch=='(' || ch==')')
    {
        return 1;
    }
    else
        return 0;
}

int isConstant(char ch)
{
    if(ch>='0' && ch<='9')
    {
        return 1;
    }
    else
        return 0;
}
int isKeyword(char s[])
{
    for(int k=0; k<strlen(s); k++)
    {
        if(strcmp(keywords[k],s)==0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    char ch, temp[100];

    int j=0;

    freopen("lexicalAnalyzer.txt", "r", stdin);

    while((ch=getchar())!=EOF)
    {
//        printf("%c",ch);

        if(isOperator(ch))
        {
            operatorAns[cnt1]=ch;
            cnt1++;
        }
        else if(isPunctuation(ch))
        {
            punctuationAns[cnt2]=ch;
            cnt2++;
        }
        else if(isConstant(ch))
        {
            constantAns[cnt3]=ch;
            cnt3++;
        }
        else if(ch==' ')
        {
            temp[j]='\0';
            if(isKeyword(temp))
            {
                strcpy(keywordAns[cnt4],temp);
                cnt4++;
            }
            else
            {
                strcpy(identifierAns[cnt5],temp);
                cnt5++;
            }
            j=0;
            temp[0]='\0';
        }
        else
        {
            temp[j]=ch;
            j++;
        }

    }

    printf("Operators are: %s\n\n",operatorAns);
    printf("\n\nPunctuations are: %s\n\n",punctuationAns);
    printf("\n\nConstants are: %s\n\n",constantAns);
    printf("\n\nKeywords are: %s\n\n",keywordAns);
    printf("\n\nidentifiers are: %s\n\n",identifierAns);

    return 0;
}
