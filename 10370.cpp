#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,n,m;
double sum,average,avobe,a[1000],count;
while(scanf("%d",&n)==1)
{
    for(i=0;i<n;i++)
    {   sum=0;
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
           scanf("%lf",&a[j]);
           sum+=a[j];
        }
        average=(double)(sum/m);
        count=0;
        for(j=0;j<m;j++)
        {
            if(average<a[j])
            {
              count++;
            }
        }
        avobe=(double)(100*count/m);
        printf("%.3lf%\n",avobe);
    }
}
return 0;
}

