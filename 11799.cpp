/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,k,i,max;
    while (scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            max=0;
            scanf("%d",&n);
            for (k=0;k<n;k++)
            {
                scanf("%d",&c);
                if (c>max)
                    max=c;
            }
            printf("Case %d: %d\n",i,max);
        }
    }
return 0;
}