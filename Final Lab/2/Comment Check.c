#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("Enter the string to check comment: \n");
    gets(s);
    printf("The inputted string is: \n");
    puts(s);

    int flag=0;

    for(int i=0; i<strlen(s); i++){
        if((s[i]== '/' && s[i+1]=='/') || (s[i]== '/' && s[i+1]=='*')){
            flag=1;
        }
    }
    if(flag){
        printf("Comment");
    }
    else{
        printf("Not Comment");
    }
}
