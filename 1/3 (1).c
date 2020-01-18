#include <stdio.h>

int main(){
    freopen("3.txt","r",stdin);
    char s[100];
    //gets(s);
    char ch;
    int i,cnt,ascii;
    int freq[27];
    //for(i = 0; i < 27; i++)
   //     freq[i] = 0;

    for(i = 0; i < strlen(s); i++){
        ascii = s[i] - 97;
        freq[ascii]++;
    }
    for(i = 0; i < 26; i++){
        ch = (char)i+97;
        printf("frequency of %c is %d\n",ch,freq[i]);
    }


    return 0;
}

