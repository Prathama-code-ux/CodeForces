#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin >> n;
    int magnet[n];
    for(int i = 0; i < n; i++){
        cin >> magnet[i];
    }

    int count = 1;
    for(int i = 0; i < n - 1; i++){
        if(magnet[i] != magnet[i+1]){
            count++;
        }
    }
    cout << count << endl;
}