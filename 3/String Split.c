#include<stdio.h>
#include<string.h>

int main(){

    char s[100];

    freopen("stringSplit.txt","r",stdin);

    gets(s);

    printf("Inputted string is: \n");
    puts(s);

    for(int i=0; i<strlen(s); i++){
        if(s[i]==' '){
            printf("\n");
        }
        else{
            printf("%c",s[i]);
        }
    }

    return 0;
}
