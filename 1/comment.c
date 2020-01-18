#include <stdio.h>
int main(){
    char s[100];
    int i;
    gets(s);
    int len = strlen(s);
    int found = 0;
    for(i = 0; i < len; i++){
        if(s[i] == '/' && s[i+1] == '/'){
            found = 1;
            break;
        }
        if(s[i] == '/' && s[i+1] == '*'){
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("Comment\n");
    }else{
        printf("doesn't have any comment\n");
    }
    return 0;
}
