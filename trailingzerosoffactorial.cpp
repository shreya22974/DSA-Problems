#include<iostream>
using namespace std;
int main(){
    int fact=1,n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact<<endl;
    int trailingzero=0;
    while(fact>0){
          int rem=fact%10;
         if(rem==0){
         trailingzero++;
    }else {
        break;
    }
      fact/=10;
    }
   
    cout<<trailingzero;
    
}