#include <stdio.h>
int main(){
    freopen("input.txt","r",stdin);
    char s[100];
    int flag = 0,i;
    while(gets(s)){
        int len = strlen(s);
        for(i = 0; i < len; i++){
            if((s[i] == '/' && s[i+1] == '/') || (s[i] == '/' && s[i+1] == '*')){
                flag = 1;
            }
        }
    }

    if(flag == 1){
        printf("Code have comments");
    }else{
        printf("doesn't contain any comment\n");
    }
    return 0;
}

