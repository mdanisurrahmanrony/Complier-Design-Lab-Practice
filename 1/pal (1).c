#include <stdio.h>
int main(){
    char s[100];
    gets(s);

    int left,right;
    left = 0,right = strlen(s)-1;
    int flag = 0;
    while(left <= right){
        if(s[left] == s[right]){
            left++;
            right--;
            continue;
        }
        flag = 1;
        break;

    }
    if(flag){
        printf("%s is not a palindrome.\n",s);
    }else{
        printf("%s is a palindrome.\n",s);
    }
    return 0;
}
