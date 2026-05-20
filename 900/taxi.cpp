#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int c = 0;

    int one = 0, two = 0, three = 0, four = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 1) one++;
        else if(a[i] == 2) two++;
        else if(a[i] == 3) three++;
        else if(a[i] == 4) four++;
    }

    // groups of 4
    c += four;

    // groups of 3
    c += three;
    one -= min(one, three);

    // groups of 2
    c += two / 2;

    if(two % 2){
        c++;
        one -= min(one, 2);
    }

    // remaining groups of 1
    if(one > 0){
        c += (one + 3) / 4;
    }

    cout << c << endl;

    return 0;
}