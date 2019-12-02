#include<bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    while (n != 0) {
        if (sqrt(n) == int(sqrt(n)))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        cin >> n;
    }
    return 0;
}

