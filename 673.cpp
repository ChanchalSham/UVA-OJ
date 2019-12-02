#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,fbl,fbr,tbl,tbr;
    char str[1000];
    cin>>tc;
    while(tc--){
    cin.getline(str,sizeof str);
    fbl=fbr=tbl=tbr=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='(')
            fbl++;
        else if(str[i]==')')
            fbr++;
        else if(str[i]=='[')
            tbl++;
        else if(str[i]==']')
            tbr++;
    }
       if((fbl==fbr)&&(tbl=tbr))
            cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
    }
}
