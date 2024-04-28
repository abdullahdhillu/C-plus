#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v){
    int i;
    for(i=0 ; i<v.size(); i++ ){
        cout<<v[i]<<" ";
    }
}
int main() {
    int i,size=0,element=0;
    vector<int> first;
    vector<int> second;
    vector<int>:: iterator iter = first.begin()+1;
    cout<<"Enter the size of your vector ";
    cin>>size;
    for (i=0 ; i < size ; i++){
        cout<<"Enter element in "<<i<<" ";
        cin>>element;
        first.push_back(element);
    }
    for ( i =1; i=first.size()-1 ; i++){
        second.push_back(first[i]);
    }
    cout<<"Your first vector is : ";
    display(first);
    cout<<"Your second vector is : ";
    display(second);
    return 0;
}
