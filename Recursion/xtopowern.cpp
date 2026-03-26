// x to the power n including negative powers
#include<iostream>
using namespace std;
double power(double x,int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 1/power(x,-n);
    }
 double half=power(x,n/2);
     if(n%2==0){
        return half*half;
     }else{
        return x*half*half;
     }
}
int main(){
      double x;
      int n;
      cout<<"enter the value of x and n: ";
      cin>>x>>n;
       cout<<power(x,n);
}