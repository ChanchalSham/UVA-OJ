#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,element,flip;
    while(scanf("%d",&n)==1){
            flip=0;
        for(int i=0;i<n;i++){
            scanf("%d",&element);
            v.push_back(element);
        }
        for(int j=0;j<v.size()-1;j++){
            for(int k=0;k<v.size()-j-1;k++){
                if(v[k]>v[k+1]){
                    flip++;
                    //swap(v[k],v[k+1]);
                }
            }
        }
        printf("Minimum exchange operations : %d\n",flip);
    }
    return 0;
}
