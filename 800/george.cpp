#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    int count = 0;
    cin >> n;
    int p[n], q[n];
    for(int i = 0; i < n; i++){
        cin >> p[i] >> q[i];
    }

    for(int i = 0; i < n; i++){
        if(abs(p[i] - q[i]) >= 2){
            count++;
        }
    }
    cout << count;
    return 0;
}