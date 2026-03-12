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
   cout<<"enter target: ";
   cin>>target;
   int st=0,end=n-1;
   while(st<=end){
    int mid= st + (end - st) / 2;
    if(arr[mid]==target){
        cout<<mid;
        return 0;
    }else if(arr[st]<=arr[mid]){//left sorted
          if(arr[st]<=target&& target<arr[mid]){
            end=mid-1;
          }else{
            st=mid+1;
          }
    }else{ //right sorted
        if(arr[mid]<target && target<=arr[end]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
   }
   cout<<-1;
}