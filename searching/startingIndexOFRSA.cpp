#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int st=0;
        int end=n-1;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
             if(arr[st] <= arr[end]){
              ans = st;
                break;
        }
        // left part sorted
        if(arr[st] <= arr[mid]){
            st = mid + 1;
        } 
        else{
            ans = mid;
            end = mid - 1;
        }
    }

    cout << ans;
}