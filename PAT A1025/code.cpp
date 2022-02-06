#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct testee{
    char id[15];
    int score;
    int location_num;
    int local_rank; 
}t[30010];

bool cmp(testee a,testee b){
    if(a.score!=b.score)
        return a.score>b.score;
    else
        return strcmp(a.id,b.id)<0;

}
int main(){
    int num=0,n=0,k=0;            //n为考场数，num为总人数，k为每个考场人数
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%s %d",t[num].id,&t[num].score);
            t[num].location_num=i;
            num++;
        }
        sort(t+num-k,t+num,cmp);
        t[num-k].local_rank=1;
        for(int j=num-k+1;j<num;j++){
            if(t[j].score==t[j-1].score)
                t[j].local_rank=t[j-1].local_rank;
            else
                t[j].local_rank=j-(num-k)+1;
        }
    }
    printf("%d\n",num);
    sort(t,t+num,cmp);
    int r=1;
    for(int i=0;i<num;i++){
        if(i>0&&t[i].score!=t[i-1].score){
            r=i+1;
        }
        printf("%s ",t[i].id);
        printf("%d %d %d",r,t[i].location_num,t[i].local_rank);
    }
    return 0;
}