#include<stdio.h>
char production[30][30];
int production_count,cnt;
char Ans[100];
void first(char ch);
int main(){
    freopen("first.txt","r",stdin);
   // printf("Enter the number of productions : ");
    scanf("%d",&production_count);

    for(int i = 0; i < production_count; i++){
    //    printf("Enter the [%d]th production: ");
        scanf("%s",production[i]);
    }
    cnt = 0;
    first('A');
    for(int i = 0; i < cnt; i++){
        printf("%c ",Ans[i]);
    }
    puts("");
    return 0;
}
void first(char ch){

    for(int i = 0; i < production_count ; i++){
        if(production[i][0] == ch){
            if(production[i][2] >= 'a' && production[i][2] <= 'z'){
                Ans[cnt] = production[i][2];
                cnt++;
            }else{
                first(production[i][2]);
            }
        }
    }
}
