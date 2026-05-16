#include <bits/stdc++.h>
using namespace std;

int main(){
    int maxcapacity = 0;
    int currcapacity = 0;

    int n;
    cin >> n;

    int a[n], b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i < n; i++){
        currcapacity += b[i] - a[i];
        maxcapacity = max(currcapacity, maxcapacity);
    }

    cout << maxcapacity <<endl;
    return 0;
}