#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;

    string arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int len;

    for(int i=0;i<n;i++){
        len=arr[i].length();
        if(len>10){
            cout<<arr[i][0]<<len-2<<arr[i][len-1]<<endl;
        }else{
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}