#include<stdio.h>

int main(){

    char s[100];

    printf("Enter the string to check palindrome: \n");

    gets(s);

    printf("\nYour inputted string is: \n");

    puts(s);

    int left=0, right=strlen(s)-1, flag=0;

    while(left<=right){
        if(s[left]==s[right]){
            left++;
            right--;
            continue;
        }
        flag=1;
        break;
    }

    if(flag){
        printf("\n%s is not a palindrome.\n",s);
    }else{
        printf("\n%s is a palindrome.\n",s);
    }

    return 0;
}
