#include<iostream>
using namespace std;
void insertion(int arr[],int &n){
    int pos,value;
    cout<<"enter position to insert";
    cin>>pos;
    cout<< "enter value:";
    cin>>value;

   for( int i=n ;i>=pos-1;i--){
         arr[i]=arr[i-1];
       }
      arr[pos-1]=value;
       n++;

}
int main(){
    int arr[10],n,i;
     cout<<"enter number of elements in array: ";
    cin>>n;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    insertion(arr,n);
   cout<<"arrays after insertion:";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}