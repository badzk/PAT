#include <cstdio>
#define SIZE 5

void insertsort(int a[]){
    for(int i=1;i<SIZE;i++){
        int j=i,temp=a[i];
        while (temp<a[j-1]&&j>=1){
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;

    }

}
int main(){
    int a[SIZE];
    for(int i=0;i<SIZE;i++){
        scanf("%d",&a[i]);
    }
    insertsort(a);
    for (int i = 0; i < SIZE; i++){
        printf("%d ",a[i]);
    }
    
}