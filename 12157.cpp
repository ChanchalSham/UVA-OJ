/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,time;
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>n;
        int tm=0,tj=0;
        for(int i=0;i<n;i++){ 
            cin>>time;
            tm+=((time/30)+1)*10;
            tj+=((time/60)+1)*15;
        }
        if(tm<tj)
            cout<<"Case "<<j<<": Mile "<<tm<<endl;
        else if(tm>tj)
            cout<<"Case "<<j<<": Juice "<<tj<<endl;
        else
            cout<<"Case "<<j<<": Mile Juice "<<tm<<endl;
    }   

    return 0;
}
