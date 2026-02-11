#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n%2==0||n%3==0||n%5==0||n%6==0||n%15==0||n%10==0||n%30==0){
        cout<<"ugly";
    }else{
        cout<<"not ugly";
    }
}