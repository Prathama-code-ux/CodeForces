#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

   

    for(int i=0;i<t;i++){
        int ans=0;
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }

        int mx=arr[0];
        int pos=0;

        for(int k=0;k<n;k++){
            if(arr[k]>mx){
                mx=arr[k];
                pos=k;
            }
        }

        swap(arr[0],arr[pos]);

        for(int m=0;m<n;m++){
            ans+=max(arr[0],arr[m]);
        }

        cout<<ans<<endl;
    }
    return 0;
}