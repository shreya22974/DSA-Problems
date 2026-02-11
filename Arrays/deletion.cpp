#include<iostream>
using namespace std;
int main(){
    int arr[10],n,i;
     cout<<"enter number of elements in array: ";
    cin>>n;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int pos,value;
    cout<<"enter position to delete";
    cin>>pos;
    if(pos<1||pos>n){
        cout<<"Invalid position";
    }

    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
   cout<<"arrays after deletion:";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}