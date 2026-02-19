#include<iostream>
#include<unordered_set>
using namespace std;
bool pairExists(int arr[],int n,int target){
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            int complement=target-arr[i];
            if(s.find(complement)!=s.end()){
                return true;
            }
            s.insert(arr[i]);
        }
        return false;
}
int main(){
             int arr[]={5,1,4,3,2};
    int n=5;
    int target=7;

    if(pairExists(arr, n, target)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}