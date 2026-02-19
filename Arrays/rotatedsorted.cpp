#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,1,2,3};
    int n=5,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
            count ++;
        }
    }
    if(count<=1){
        cout<<"rotated sorted";
    }else{
        cout<<"not rotated sorted";
    }
}