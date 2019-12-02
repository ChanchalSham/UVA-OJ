#include<bits/stdc++.h>
using namespace std;
int main()
{
int courses, categories, total, minimum;
string str;
while(scanf("%d", &courses))
{
    if(!courses)
       break;
    scanf("%d", &categories);
    vector<string>courseSelected;

    for(int x=0; x<courses; x++)
    {
        cin>>str;
        courseSelected.push_back(str);
    }
    int flag = 1;
    for(int c=1; c<=categories; c++)
    {
        scanf("%d %d", &total, &minimum);
        int tmp = 0;
        for(int x=1; x<=total; x++)
        {
            cin>>str;
            for(int y=0; y<courseSelected.size(); y++)
            {
                if(courseSelected[y] == str)
                {
                    tmp++;
                    break;
                }
            }
        }
        if(tmp<minimum)
           flag = 0;
    }
    if(!flag)
       printf("no\n");
    else
        printf("yes\n");

}
return 0;
}
