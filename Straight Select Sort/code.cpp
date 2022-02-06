#include <stdio.h>

void selectsort_my(int a[]);
void selectsort(int a[]);
 int main(){
     int a[5]={0};
     for (int i = 0; i < 5; i++){
         scanf("%d",&a[i]);
     }
    selectsort(a);
    for (int t = 0; t < 5; t++){
       printf("%d ",a[t]);
    }
 }

 void selectsort_my(int a[]){                   //自己写的
      int temp,min=0,m=0,n=0,tag=0;
     for (n = 0; n < 5; n++){
         min=a[n];
         tag=n;
         for(m=n;m<5;m++){
            if (a[m]<min){
                min=a[m];
                tag=m;
            }
         }
         temp=a[n];
         a[n]=min;
         a[tag]=temp;
     }
   }


void selectsort(int a[]){
    for(int i=0;i<5;i++){
        int k=i;
        for (int j = i; j < 5; j++){
            if(a[j]<a[k]){
                k=j;
            }
        }
    int temp=a[i];
    a[i]=a[k];
    a[k]=temp;
    }
}