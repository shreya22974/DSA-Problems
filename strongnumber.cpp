//strong number == sum of  factorial of digits eg: 145=1!+4!+5!
#include<iostream>
using namespace std;
int main(){
    int n,rem,strnum=0,originalnum;
    cout<<"Enter a number: ";
    cin>>n;
    originalnum=n;
    while(n>0){
        int fact=1;
        rem=n%10;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        strnum+=fact;
        n/=10;
    }
    if(originalnum==strnum){
        cout<<"it is a strong number";
    }else{
        cout<<"it is not a strong number";
    }

}