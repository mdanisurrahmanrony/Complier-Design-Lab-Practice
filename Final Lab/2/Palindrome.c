#include<stdio.h>
#include<string.h>

int main()
{

    char s[100];

    printf("Enter the string to check palindrome: \n");

    gets(s);

    printf("Inputted string is: \n");

    puts(s);

    int left=0, right=strlen(s)-1, flag=0;

    while(left<=right)
    {

        if(s[left]!=s[right])
        {
            left++;
            right--;
            break;
        }
        flag=1;
        break;
    }

    if(flag==1)
    {
        printf("Palindrome");
    }
    else if(flag==0)
    {
        printf("Not Palindrome");
    }

    return 0;
}
