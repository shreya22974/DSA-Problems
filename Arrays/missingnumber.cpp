#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int arr[10],n;
     cout<<"enter number of elements in array: ";
    cin>>n;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<< "missing number : "<< i+1;
            return 0;
        }
    }
     cout<<"No missing number";
    return 0;
  
}
