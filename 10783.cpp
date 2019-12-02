#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,sum,tc=0;
    cin>>t;
    while(t--){
            tc++;
        cin>>a>>b;
        sum=0;
        for(int i=a;i<=b;i++){
            if(i%2!=0)
                sum+=i;
        }
    cout<<"Case "<<tc<<": "<<sum<<endl;
    }
}
