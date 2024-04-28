#include<iostream>
#include<string> 
using namespace std;
int main()
{
    int i,j;
    char arr[5];
    for(i=0;i<5;i++){
        cout<<"Enter data in : ["<<i<<"]";
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    for(i=0;i<5;i++){
    cout<<"Which element would you like to change? press Q to quit";
    cin>>j;
    if(j=='Q'){
    break;}
    cout<<"Enter new data in: ["<<j<<"]";
    cin>>arr[j];
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
