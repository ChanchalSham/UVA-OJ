/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,i,temp,temp2;
    char name[101][101];
    char song[16][10]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%s",name[i]);
    }
    if (t%16==0) n=t/16;
    else n=(t/16)+1;
    n=n*16;
    for (i=0;i<n;i++)
    {
        temp=i%t;
        temp2=i%16;
        printf("%s: %s\n",name[temp],song[temp2]);
    }
    return 0;
}
