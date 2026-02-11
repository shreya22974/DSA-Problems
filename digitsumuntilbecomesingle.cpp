//sum of a digit until it becomes single digit eg 12345 sum is 15 ..again take sum then sum->6 stop 
#include<iostream>
using namespace std;
int main(){
    int n,rem;
     cout<<"enter a number:";
     cin>>n;
      while(n>9){
               int sum=0;
              while(n>0){
              rem=n%10;
              sum+=rem;
               n/=10;
            } 
            n=sum;
      }
        cout<<n;
}