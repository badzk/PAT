#include <cstdio>
#include <algorithm>
using namespace std;

struct mooncake{
    double store;//库存
    double sell;//总售价
    double price;//单价
}cake[1010];
 bool cmp(mooncake a,mooncake b){
     return a.price>b.price;
 }

 int main(){
     int n;
     double D;
     scanf("%d%lf",&n,&D);
     for(int i=0;i<n;i++){
         scanf("%lf",&cake[i].store);   //输入库存
     }
     for (int i = 0; i < n; i++){
         scanf("%lf",&cake[i].sell);    //输入总价
         cake[i].price=cake[i].sell/cake[i].store;  //计算单价
     }
     sort(cake,cake+n,cmp);     //单价排序
     double ans=0;
     for(int i=0;i<n;i++){
         if(cake[i].store<=D){
             D-=cake[i].store;
             ans+=cake[i].sell;
         }else{
                ans+=cake[i].price*D;
                break;
         }
     }
     printf("%.2f\n",ans);
     return 0; 
 }
