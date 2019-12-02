/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,t,i,ar[10],max;
    char br[10][100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)

    {
        max=0;
        for(int j=0;j<10;j++)
        {

        scanf("%s %d",&br[j],&ar[j]);
        if(ar[j]>max)
            max=ar[j];

        }
        printf("Case #%d:\n",i);
        for(int j=0;j<10;j++)
            if(ar[j]==max)printf("%s\n",br[j]);

    }
    return 0;
}
