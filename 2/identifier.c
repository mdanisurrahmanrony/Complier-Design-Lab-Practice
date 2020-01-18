#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i;
    if((s[0] >= 'a' && s[0] <= 'z') ||
            s[0] >= 'A' && s[0] <= 'Z' ||
            s[0] == '_')
    {
        int len = strlen(s);
        int flag = 0;
        for(i = 1; i < len; i++)
        {

            if((s[i] >= 'a' && s[i] <= 'z') ||
                    s[i] >= 'A' && s[i] <= 'Z' ||
                    s[i] == '_' || (s[i] >='0' && s[i] <= '9'))
            {
               flag = 1;
               break;
            }
        }
        if(flag){
            printf("Invalid identifier\n");
        }else{
            printf("valid identifier\n");
        }
    }
    else
    {
        printf("Invalid identifier\n");
    }

    return 0;
}
