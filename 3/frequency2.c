#include <stdio.h>
int main(){
    char s[100];
    gets(s);
    int i;
    int frequency[130];
    for(i = 0; i < 130; i++)
        frequency[i] = 0;

    for(i = 0; i < strlen(s); i++){
        int position = (int) s[i];
        frequency[position]++;
    }

    for(i = 0; i < 130; i++){
        if(frequency[i] > 0){
            printf("%c occurs %d times\n",(char)i, frequency[i]);
        }
    }

    return 0;
}
