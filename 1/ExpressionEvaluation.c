#include <stdio.h>
#include<string.h>
int SRKCalculate(int S, char R, int K)
{
    switch(R)
    {
        case '+':
            return (S+K);
            break;
        case '-':
            return (S-K);
            break;
        case '*':
            return (S*K);
            break;
        case '/':
            return (S/K);
            break;
        default:
            return 0;
    }
}
int main()
{
    //freopen("in.txt","r",stdin);
    int n,m,i,j,k,result1,result2, result, StrLen;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    char idn[n+1],op[n+1];
    int value[n+1];
    for(i=0; i<n; i++)
        scanf(" %c %c%d",&idn[i],&op[i],&value[i]);
    printf("Enter the equations Number: ");
    scanf("%d",&m);
    getchar();
    char ch, oprtr, eqn[m][20];
    for(i=0; i<m; i++)
        gets(eqn[i]);
    for(k=0; k<m; k++)
    {
        StrLen = strlen(eqn[k]);
        result = 0;
        for(i=0; i<StrLen; i++)
        {
            ch = eqn[k][i];
            if(i==0)
            {
                for(j=0; j<n; j++)
                {
                    if(ch==idn[j])
                        result1 = value[j];
                }
                oprtr = eqn[k][++i];
            }
            else
            {
                result1 = result;
                oprtr = ch;
            }
            ch= eqn[k][++i];
            for(j=0; j<n; j++)
            {
                if(ch==idn[j])
                    result2 = value[j];
            }
            result = SRKCalculate(result1, oprtr, result2);
        }
        printf("\n%d. %s ",k+1,eqn[k]);
        printf("= %d\n",result);
    }
}
