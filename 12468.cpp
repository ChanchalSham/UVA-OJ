/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, i, s;
    while (scanf("%d%d", &a, &b) == 2 && (a != -1 && b != -1)){
        s = abs(a - b);
 
        if(s > 50)
            s = 100 - s;
 
        printf("%d\n", s);
    }
    return 0;
}