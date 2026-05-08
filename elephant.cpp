#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    if(x == 1 || x == 2 || x == 3 || x == 4 || x == 5){
        cout << 1 << endl;
    }else{
        int count = 0;
        while(x > 0 && x > 5){
            x = x - 5;
            count++;
        }
        cout << (count + 1) << endl;
    }
    // cout << (x + 4)/5;
    return 0;
}