#include<stdio.h>
#include<string.h>

char production[100][100], ans[100];
int productionCount,j;

int main()
{

    freopen("first.txt", "r", stdin);

    scanf("%d",&productionCount);

    printf("Number of productions are: %d\n",productionCount);

    for(int i=0; i < productionCount; i++)
    {
        scanf("%s",production[i]);
    }

    printf("\nProductions are\n\n");

    for(int i=0; i < productionCount; i++)
    {
        printf("%s\n",production[i]);
    }

    j=0;

    first('A');

    printf("\n");

    for(int i=0; i<j; i++)
    {
        printf("%c ",ans[i]);
    }

    printf("\n");

    return 0;
}

void first(char ch)
{

    for(int i=0; i<productionCount; i++)
    {
        if(production[i][0]==ch)
        {
            if(production[i][2]>='a' && production[i][2]<='z')
            {
                ans[j]=production[i][2];
                j++;
            }
            else
            {
                first(production[i][2]);
            }
        }
    }

}
