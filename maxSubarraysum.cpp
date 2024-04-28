#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int counter=0;
    cin>>n;
    int sum = 0;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int maxSum = -100;
    for(int i = 0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<"{ ";
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum += arr[k];
                if(maxSum<=sum){
                    maxSum = sum;
                }
            }
            cout<<" }";
            cout<<"     Sum = "<<sum<<endl;
            counter++;
            cout<<endl;
            sum = 0;
        } 
    }
    cout<<"Total sub arrays : "<<counter<<endl;
    cout<<"max Sum array is : "<<maxSum<<endl;
    
}
