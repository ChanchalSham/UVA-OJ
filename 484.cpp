#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    vector<int>v;
    int n;
    while(scanf("%d",&n)==1){
        if(m[n]==0){
            v.push_back(n);
            m[n]++;
            }
        else
            m[n]++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<m[v[i]]<<endl;
    }
   return 0;
}
