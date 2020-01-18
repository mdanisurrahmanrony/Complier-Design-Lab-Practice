#include <stdio.h>
int main(){
    //freopen("input.txt","r",stdin);
    char s[100],s1[100];
    int num;
    scanf("%d",&num);
    int i;
    getchar();
    for(i = 0; i < num; i++){

        gets(s);
        printf("%s\n",s);
    }

    return 0;
}
