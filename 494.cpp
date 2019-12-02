#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10005];
    int i,l,count;
    while(gets(a))
    {
        l=strlen(a);
        count=0;
        for(i=0;i<l;i++)
        {
            if(isalpha(a[i]) && !isalpha(a[i+1]))
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
