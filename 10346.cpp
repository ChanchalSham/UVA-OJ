#include<bits/stdc++.h>
using namespace std;
int count(int n,int k){
if(n<k)
    return 0;
    else{
     return (n/k)+count(((n/k)+(n%k)),k);
    }
}
int main()
{
    int n,k,sum;
    while(scanf("%d%d",&n,&k)==2){
        sum=n+count(n,k);
        cout<<sum<<endl;
    }
return 0;
}
