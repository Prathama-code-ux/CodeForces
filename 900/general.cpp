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
    int t = 0;

    for(int i = 0; i < n; i++){
        arrmax = max(arrmax, a[i]);
        arrmin = min(arrmin, a[i]);
        if(a[i] == arrmax){
            maxidx = i;
        }
        if(a[i] == arrmin){
            minidx = i;
        }
    }

    while(maxidx > minidx){
        if(a[0] != arrmax){
            swap(a[maxidx], a[maxidx-1]);
            t++;
            maxidx--;
        }

        if(a[n-1] != arrmin){
            swap(a[minidx], a[minidx+1]);
            t++;
            minidx++;
        }
    }
    
    cout << t << endl;
    return 0;
}