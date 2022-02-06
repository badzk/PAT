#include <stdio.h>

int main(){
    int a,b,d;
    scanf("%d %d %d",&a,&b,&d);
    int x,p[40],i=0;
    x=a+b;
    do{
        p[i++]=x%d;
        x=x/d;
    } while (x);
    for(int m=i-1;m>=0;m--){
        printf("%d",p[m]);
    }
    return 0;
}