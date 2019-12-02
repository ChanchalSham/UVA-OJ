#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        long long int fact=1,sum=0;
        for (long long int i=n;i>0;i--){
            fact*=i;
        }
        while(fact!=0){
            sum+=(fact%10);
            fact=fact/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
