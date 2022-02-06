#include <iostream>

using namespace std;

int result[50];
int input[10];
int main(){
    int n;
    bool tag=true;
    for(int i=0;i<10;i++){
        scanf("%d",&input[i]);
        n+=input[i];
        if (i!=0&&input[i]!=0&&tag){
            result[0]=i;
            input[i]--;
            tag=false;
        }
    }
    int pointer=1;
    for(int i=0;i<10;i++){
        while (input[i]>0){
            result[pointer++]=i;
            input[i]--;
        }   
    }
    for(int i=0;i<n;i++){
        printf("%d",result[i]);
    }
}
