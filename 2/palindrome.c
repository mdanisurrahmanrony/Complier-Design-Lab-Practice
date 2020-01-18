#include <stdio.h>
int main(){
    char s[100];
    int i,j;
    gets(s);
    int len = strlen(s);
    i = 0;
    j = len-1;

    int flag = 0;
    while(i <= j){
        if(s[i] != s[j]){
            flag = 1;
        }
    }
    if(flag){
        printf("Not a palindrome\n");
    }else{
        printf("Palindrome");
    }

    return 0;
}
