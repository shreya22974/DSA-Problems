#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=1 && n!=4){
               sum=0;
          while(n>0){
            int rem=n%10;
            sum=sum+rem*rem;
            n/=10;
          }
          n=sum;
    }
    if(n==1){
        cout<<"happy number";
    }else{
        cout<<"not a happy number";
    }
}