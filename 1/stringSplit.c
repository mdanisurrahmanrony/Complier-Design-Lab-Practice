#include <stdio.h>
int main(){
    freopen("input.txt","r",stdin);
    char S[100];
    int i;
    gets(S);

    int len = strlen(S);

    for( i = 0; i < len; i++){
        if(S[i] == ' '){
            printf("\n");
        }else{
            printf("%c",S[i]);
        }
    }

    return 0;
}
