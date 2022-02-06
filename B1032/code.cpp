#include <stdio.h>
const int MAX_SIZE=100010;
int school[MAX_SIZE]={0};
int main(){
    int N,schoolID,score;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d%d",&schoolID,&score);
        school[schoolID]+=score;
    }
    int k=1,max=-1;
    for(int m=0;m<N;m++){
        if(school[m]>max){
            max=school[m];
            k=m;
        }
    }
    printf("%d %d",k,max);
}