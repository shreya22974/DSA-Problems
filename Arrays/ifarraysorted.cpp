#include<iostream>
using namespace std;
int main(){
    int n,arr[20];
    bool isSorted=true;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            isSorted=false;
            break;
        }
    }
    if(isSorted==true){
        cout<<"Array is Sorted";
    }else{
        cout<<"Array is not Sorted";
    }  
}