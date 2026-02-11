#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
     if(n==1){
            cout<<"it is neither prime nor composite";
     }
     bool isPrime=true;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"it is a prime number";
    }else{
        cout<<"it is not a prime number";
    }
    return 0;
}