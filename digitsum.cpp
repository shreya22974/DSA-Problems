#include<iostream>
using namespace std;
int main(){
    int sum=0,rem,n;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    cout<<"The sum of digits is: "<<sum<<endl;
}