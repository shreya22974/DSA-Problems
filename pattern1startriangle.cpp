#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star 
        for(int j=0;j<2*i+1;j++){
            cout<<"*"<<" ";
        }
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}