#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int freq[10]={0};
   while(n>0){
        int digit=n%10;
        freq[digit]++;
        n/=10;
   }
   int oddCount=0;
      for(int i=0; i<=9;i++){
    if(freq[i] %2 !=0){
        oddCount++;
    }
  }
  if(oddCount<=1){
    cout<<"yes,Palindrome can be formed";
  }else{
    cout<<"palindrome can't be formed";
  }
    
}