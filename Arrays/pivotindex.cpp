#include<iostream>
using namespace std;
int main(){
      int arr[10],n;
    cout<<"enter number of elements in array: ";
    cin>>n;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }
    int leftSum=0;
    for(int i=0;i<n;i++){
        int rightSum=totalSum-leftSum-arr[i];
        if(leftSum==rightSum){
            cout<<"pivot index :"<<i;
            return 0;
        }
        leftSum+=arr[i];
    }
    cout << "No pivot index";
}