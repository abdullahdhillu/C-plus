#include<iostream>
using namespace std;
int main()
{   
    int i,n;
    int t;
    cout<<"Konsa table? ";
    cin>>t;
    cout<<"Kahan Tak? ";
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cout<<t<<" x "<<i<<" = "<<t*i<<endl;  
    }
    return 0;
}