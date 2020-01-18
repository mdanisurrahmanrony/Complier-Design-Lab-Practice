#include <stdio.h>
int main(){
    char s[100];
    gets(s);
    char ch;
    int i,cnt;
    for(ch = 'a'; ch <= 'z'; ch++){
        cnt = 0;
        for(i = 0; i < strlen(s); i++){
            if(s[i] == ch){
                cnt++;
            }
        }
        printf("%c occurs %d times\n",ch,cnt);
    }

    return 0;
}
