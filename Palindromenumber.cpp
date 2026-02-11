//palindrome number 
#include<iostream>
using namespace std;
int main(){
    int rem,rev=0,num=0,originalnum;
    cout<<"enter a number:";
    cin>>originalnum;
    num=originalnum;
    while(num>0){
         rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==originalnum){
        cout<<"it is a palindrome number";
    }else{
        cout<<"it is not a palindrome number";
    }
}