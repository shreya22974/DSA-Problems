#include<iostream>
using namespace std;
bool powerOfTwo(int n){
        if(n==1){
        return true;
    }
    if(n%2 == 1 || n==0){
        return false;
    }
    return powerOfTwo(n/2);
}
int main(){
    int n;
    cin>>n;
    cout<<powerOfTwo(n)<<endl;
}