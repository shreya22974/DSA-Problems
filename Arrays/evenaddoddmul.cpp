#include<iostream>
using namespace std;

int main(){
    int  n,arr[10],add=0,mul=1;
    cout<<"enter number of elements in array: ";
    cin>>n;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n;i++){
      if(i%2==0){
           add=add+arr[i];
      }else{
          mul=mul*arr[i];
      }
    }
   cout << "Addition is: " << add << endl;
   cout << "Multiplication is: " << mul;

   
}