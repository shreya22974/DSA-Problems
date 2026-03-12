#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int st,int end,int target){
       while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
              if(mid>0&&arr[mid-1]==arr[mid]){
               return binarySearch(arr,n,st,mid-1,target)
              }
          return  mid;
        }else if(arr[mid]>target){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return -1;
}

int main(){
    int n,arr[100],target;
    cout<<"enter number of elements:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target";
     cin>>target;
      int st=0,end=n-1;
      int result = binarySearch(arr, n, st, end, target);

    if(result != -1)
        cout << "Target found at index: " << result;
    else
        cout << "Target not found";
     
}