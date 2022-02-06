#include <vector>
#include <stack>
#include <stdio.h>
using namespace std;

int main(){
    vector<int> vi;
    for (int i = 0; i < 5; i++){
        vi.push_back(i);
    }
    vector<int>::iterator it=vi.begin();
    //遍历
    for(int i=0;i<5;i++){
        printf("%d ",*(it+i));
    }
}