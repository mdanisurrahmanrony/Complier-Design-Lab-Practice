#include<stdio.h>
#include<string.h>

int main()
{

    char s[100];

    freopen("stringFrequency.txt","r",stdin);

    gets(s);

    printf("Inputted string is: \n");
    puts(s);


    for(char ch='a'; ch<='z'; ch++)
    {

        int count=0;

        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]==ch)
            {
                count++;
            }
        }

        printf("Number of %c in the string is: %d\n",ch,count);

    }

    return 0;
}
