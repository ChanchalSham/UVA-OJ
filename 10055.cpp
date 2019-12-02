#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        cout<<((a>b)?(a-b):(b-a))<<endl;
    }
    return 0;
}
