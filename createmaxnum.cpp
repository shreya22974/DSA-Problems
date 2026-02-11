#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[20];
    int size=0;
    while (n>0){
        arr[size]=n%10;
          size++;  
        n/=10;
    }
    sort(arr,arr+size);
    for(int i=size-1;i>=0;i--){
        cout<<arr[i];
    }
}