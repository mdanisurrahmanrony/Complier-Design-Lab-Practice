#include<stdio.h>

int main(){

    char s[100];

    freopen("StringSplit.txt", "r", stdin);

    gets(s);

    puts(s);

    printf("\n\n");

    int i, len=strlen(s);

    for(i=0; i<len; i++){
        if(s[i]==' '){
            printf("\n");
        }
        else{
            printf("%c",s[i]);
        }
    }

    printf("\n\n");
}
