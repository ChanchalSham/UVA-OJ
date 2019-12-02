#include<bits/stdc++.h>
using namespace std;
int main()
{
 long int n,sum;
 while(scanf("%ld",&n)==1){
    sum=(n*n*(n+1)*(n+1))/4;
    printf("%ld\n",sum);
 }
    return 0;
}
