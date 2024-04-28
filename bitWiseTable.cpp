#include <iostream>
using namespace std;
void  printbitwisetable(int n){
    int count = 0 ;
    for(int i = 0 ; i < (1<<n) ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            int bitmask = (1<<j);
            int result = i & bitmask;
            if(result){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
            
        }
        cout<<endl;
    }
}
int main() 
{
    printbitwisetable(4);
    return 0;
}
