#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 1;

    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[i-1]){
            count++;
        }else{
            count = 1;
        }
        
        if(count == 7){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}