#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int arrmax = a[0];
    int arrmin = a[0];
    int maxidx = 0;
    int minidx = 0;
    
    for(int i = 0; i < n; i++){
        if(a[i] > arrmax){
            arrmax = a[i];
            maxidx = i;
        }
    }

    // rightmost minimum
    for(int j = 0; j < n; j++){
        if(a[j] <= arrmin){
            arrmin = a[j];
            minidx = j;
        }
    }

    int t = maxidx + (n - 1 - minidx);

    // if they cross paths
    if(maxidx > minidx){
        t--;
    }

    cout << t << endl;

    return 0;
}