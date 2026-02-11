#include<iostream>
using namespace std;
int main(){
    int count=0,n;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        count++;
        n/=10;
    }
    cout<<count;
}