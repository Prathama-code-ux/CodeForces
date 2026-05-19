#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int k;
    cin >> k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int count = 0;
    int teamcount = 0;

    for(int i = 0; i < n; i++){
        if(a[i] + k <= 5){
            count++;
        }
        if(count == 3){
            teamcount++;
            count = 0;
        }
    }
    cout << teamcount << endl;
}