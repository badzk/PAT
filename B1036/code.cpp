#include<stdio.h>

int main(){
    int len=0;
    char c;
    scanf("%d %c",&len,&c);

    int r[20][20]={0};  //二维数组画图，有输出的为1，空白的为0

    for(int n=0;n<len;n++){     //画第一行和最后一行
        r[0][n]=1;
        r[len/2-1][n]=1;
    }

    for(int m=0;m<len/2;m++){   //第一列和最后一列
            r[m][0]=1;      
            r[m][len-1]=1;
        }
    for(int i=0;i<len/2;i++){
        for (int j = 0; j < len; j++){
           if(r[i][j]==1){
            printf("%c",c);
           }else{
               printf(" ");
           }
        }
    printf("\n");
    }
    
}