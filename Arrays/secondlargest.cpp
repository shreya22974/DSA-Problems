#include<bits/stdc++.h>
using namespace std;
int main(){
       int n,arr[10];
       int max=INT_MIN;
       int secondmax=INT_MIN;
       cout<<"enter number of elements :";
       cin>>n;
       cout<<"enter elements in array: ";
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondmax=max;
             max=arr[i];
        } else if(arr[i]<max && arr[i]>secondmax){
            secondmax=arr[i];
        }
     }

       cout<<secondmax;
}