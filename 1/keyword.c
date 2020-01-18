#include <stdio.h>
int main(){
    char keywords[6][10] = {"if","break","for","int","case"};
    freopen("input.txt","r",stdin);
    int i,k;
    char s[100],temp[20];
    while(gets(s)){
           // puts(s);
        int len = strlen(s);
        int flag = 0;
        int j = 0;
        for(i = 0; i < len; i++){
            if(flag == 1)
                break;
            if(s[i] == ' ' || i == len-1){
                temp[j] = '\0';
                //printf("%s\n",temp);
                for(k = 0; k < 5; k++){
                    if(strcmp(keywords[k],temp) == 0){
                        flag = 1;
                        break;
                    }
                }
                temp[0] = '\0';
                j = 0;
            }else{
                temp[j] = s[i];

                j++;
            }
        }
        if(flag){
            printf("Keyword found\n");
        }else{
            printf("doesn't contain any keyword\n");
        }
    }

    return 0;
}
