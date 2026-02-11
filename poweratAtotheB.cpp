//calculate a^b without using power function
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a number a: ";
    cin>>a;
    cout<<"enter a number b: ";
    cin>>b;
    int power=1;
    while(b!=0){
      power=power*a;
      b--;
    }
    cout<<power;
}