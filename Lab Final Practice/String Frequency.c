#include<stdio.h>

int main()
{

    freopen("StringFrequency.txt", "r", stdin);

    char s[100];

    int i;

    gets(s);

    puts(s);

    printf("\n\n");

    for(char ch='a'; ch<='z'; ch++)
    {

        int count=0;

        for(i=0; i<strlen(s); i++)
        {
            if(s[i]==ch)
            {
                count++;
            }
        }

        printf("Frequency of %c in the string is: %d\n\n",ch,count);
    }

    return 0;
}
