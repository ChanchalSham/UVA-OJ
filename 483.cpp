#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    char str[10000];
    while(gets(str)){
            len=-1;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i+1]==' '||str[i+1]=='\0'){

            for(int j=i;j>len;j--)
                {
                    printf("%c",str[j]);
                }
                if(str[i+1]!='\0')
                {cout<<" ";}
                len=i+1;
        }

    }
    printf("\n");
    }
    return 0;
}
