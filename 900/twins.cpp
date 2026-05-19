#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;

    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
        sum += coins[i];
    }

    sort(coins.begin(), coins.end());

    int count = 0;
    int currsum = 0;

    for(int i = n-1; i >= 0; i--){
        currsum += coins[i];
        count++;

        if(currsum > sum - currsum){
            break;
        }
    }

    cout << count << endl;
    return 0;
}