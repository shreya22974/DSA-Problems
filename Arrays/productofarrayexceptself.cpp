#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"enter number of elements in array: ";
    cin>>n;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*arr[i-1];
    }
    int suffix=1;
    for(int i=n-2;i>=0;i--){
         suffix*=arr[i+1];
          ans[i]*=suffix;
     }
     for(int i=0;i<n;i++){
           cout<<ans[i]<<" ";
    }
}