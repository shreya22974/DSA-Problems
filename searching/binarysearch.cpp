#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
    int st = 0;
    int end = n - 1;
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid] == target){
            return mid;  
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n,arr[100],target;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"enter target: ";
   cin>>target;
   int result = binarySearch(arr, n, target);

    if(result == -1){
        cout << "Target not found";
    }else{
        cout << "Target found at index: " << result;
    }
  return 0;
}