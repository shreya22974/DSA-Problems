#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,digit=0,rem,arms=0,originalnum;
    cout<<"Enter a number:";
    cin>>n;
       originalnum=n;
    while(n>0){
        digit++;
        n/=10;
    }
    cout<<digit<<endl;
        n=originalnum;
    while (n>0){
        rem=n%10;
        arms=arms+ pow(rem,digit);
        n/=10;
    }
    if(originalnum==arms){
           cout<<"it is a armstrong number";
    }else{
        cout<<"not a armstrong number";
    }
  
}