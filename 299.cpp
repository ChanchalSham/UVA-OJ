#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[50];
   cin>>t;
   while(t--)
   {
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       int swaps=0;
       for(int k=0;k<n;k++)
       {
           for(int j=0;j<n-1;j++)
           {
               if(a[j+1]<a[j])
               {
                   int temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                   swaps++;
               }
           }
       }
       printf("Optimal train swapping takes %d swaps.\n",swaps);
   }
   return 0;
}
