#include <stdio.h>
#include <cstring>

bool judge(char str[]){
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        if (str[i]!=str[len-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    char s[255];
    scanf("%s",s);
    if(judge(s)){
        printf("YES");
    }else{
        printf("NO");
    }
}