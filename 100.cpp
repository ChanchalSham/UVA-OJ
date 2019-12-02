#include<bits/stdc++.h>
using namespace std;
int counting(int i);
int main()
{
    int a,b,c,x,y,max=1;
    cin>>a>>b;
    x=(a>b)?a:b;
    y=(a<b)?a:b;
    for(int i=y;i<=x;i++){
        c=counting(i);
        if(c>max)
            max=c;
    }
    cout <<a<<" "<<b<<" "<<max<<endl;
    return 0;
}
int counting(int i)
{
    int count=1;
    while(i>1){
        if(i%2==0)
            i=i/2;
        else
            i=3*i+1;
        count++;
    }
    return count;
}
