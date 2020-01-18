#include<stdio.h>
#include<string.h>

int SRKcalculate(int S,char R,int K)
{

    switch(R)
    {
    case '+':
        return (S+K);
        printf("S=%d, R=%c, K=%d, (S+K)=%d",S,R,K,S+K);
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

    int v, i, n, m, j, k, result1, result2,result, len;

    printf("Enter the number of identifiers:\n");
    scanf("%d",&v);

    char idn[v+1], opr[v+1];
    int values[v+1];

    printf("Enter identifiers, equal operators and values:\n");

    for(i=0; i<v; i++)
        scanf(" %c %c %d",&idn[i],&opr[i],&values[i]);

//    printf("\nYour inputted string is:\n");
//
//    for(i=0; i<v; i++)
//        printf(" %c %c %d",idn[i],opr[i],values[i]);

    printf("Enter the number of equations:\n");
    scanf("%d",&n);

    char eqn[n][100], ch, oprtr;

    printf("Enter the equations:\n");

    getchar();

    for(i=0; i<n; i++)
    {
        gets(eqn[i]);
    }

//    printf("Equations are:\n");
//
//    for(i=0; i<n; i++){
//        puts(eqn[i]);
//    printf("%s",eqn[i]);
//    }

    for(m=0; m<n; m++)
    {

        len = strlen(eqn[m]);

        result=0;

        for(j=0; j<len; j++)
        {

            ch=eqn[m][j];

//            printf("First character of each iteration: %c\n",ch);

            if(j==0)
            {
                for(k=0; k<v; k++)
                {
                    if(ch==idn[k])
                    {
                        result1=values[k];
//                        printf("result1 for first time: %d\n",ch);
                    }
                }
                oprtr=eqn[m][++j];
//                printf("Operator for first time: %c\n",oprtr);

            }
            else
            {
                result1=result;
//                printf("result1: %d\n",result1);
                oprtr=ch;
//                printf("Operator: %c\n",oprtr);
            }

            ch=eqn[m][++j];

            for(k=0; k<v; k++)
            {
                if(ch==idn[k])
                {
                    result2=values[k];
//                    printf("result2: %d\n",result2);
                }
            }
            result = SRKcalculate(result1,oprtr,result2);
        }

        printf("\n\n%d. %s = ",m+1,eqn[m]);
        printf("%d\n\n",result);
    }


    return 0;
}
