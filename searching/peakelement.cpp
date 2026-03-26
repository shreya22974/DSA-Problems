#include<iostream>
using namespace std;

int main(){
    int n,arr[100],target;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int st = 1;
    int end = n - 2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
           cout<< arr[mid];
            break;
        }else if(arr[mid+1]>arr[mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
}