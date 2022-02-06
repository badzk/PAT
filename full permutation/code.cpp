#include <cstdio>
using namespace std;

const int maxn=11;

bool hashTable[maxn]={false};
int p[maxn],n;
void generate(int index){
    if(index==n+1){
        for (int i = 1; i <= n; i++){
            printf("%d ",p[i]);
        }  
        printf("\n");
        return;
    }
    for(int x=1;x<=n;x++){
        if(hashTable[x]==false){
            p[index]=x;
            hashTable[x]=true;
            generate(index+1);
            hashTable[x]=false;
        }
    }
}

int main(){
    //scanf("%d",&n);
    n=3;
    generate(1);
    return 0;
}