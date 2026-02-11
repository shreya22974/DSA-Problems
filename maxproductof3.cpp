#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

   int prod1=arr[n-1]*arr[n-2]*arr[n-3];
   int prod2=arr[0]*arr[1]*arr[n-1];
   cout<<"max prodcut of 3 number in an array is: "<<max(prod1,prod2);
}
