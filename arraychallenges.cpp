// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {    //{1,2,4,6,8,3,5,7,9,11,6}
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 2;
    int curr = 2;
    int j = 2;
    int pcd = arr[1]-arr[0];
    while(j<n){
        if(pcd == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pcd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<" Longest Arithmetic Sub-array is "<<ans;
    return 0;
}
