#include<iostream>
#include<algorithm>
using namespace std;

bool pairExists(int arr[], int n, int target){
    sort(arr, arr + n);

    int st = 0;
    int end = n - 1;

    while(st < end){
        int sum = arr[st] + arr[end];

        if(sum == target){
            return true;   
        } else if(sum > target){
            end--;
        }  else{
            st++;
        }
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
