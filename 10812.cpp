#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,tc;
    double t1,t2;
    cin>>tc;
    while(tc--){
        cin>>a>>b;
        t1=(a+b)/2;
        t2=(a-b)/2;
        if(int(t1+t2)!=a||(t1<0)||(t2<0))
            cout<<"impossible"<<endl;
        else
            cout<<t1<<" "<<t2<<endl;
    }
    return 0;
}
