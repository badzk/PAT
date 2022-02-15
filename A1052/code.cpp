#include <cstdio>
#include <algorithm>
using namespace std;

struct node{
    int addr,key,next;
    bool flag;
}link[100000];

 bool cmp(node a,node b){
     return a.key<b.key;
 }
 int main(){
     int n,head;
     scanf("%d%d",&n,&head);
     printf("%d ",n);
     for(int i=0;i<n;i++){
        scanf("%d %d %d",&link[i].addr,&link[i].key,&link[i].next);
     }
     sort(link,link+n,cmp);
     printf("%d\n",link[0].addr);
    for(int i=0;i<n;i++){
        if(i!=n-1){
            printf("%05d %d %05d\n",link[i].addr,link[i].key,link[i+1].addr);
        }else{
            printf("%05d %d %d\n",link[i].addr,link[i].key,-1);
        }
    }
}
 