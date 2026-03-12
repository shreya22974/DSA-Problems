#include<iostream>
using namespace std;
int firstOcc(int nums[],int n,int target){
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
       if(nums[mid]==target){
        ans=mid;
        end=mid-1;
       }else if(nums[mid]>target){
        end=mid-1;
       }else{
        st=mid+1;
       }
    }
    return ans;
  }
  int lastOcc(int nums[],int n,int target){
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            ans=mid;
            st=mid+1;
        }else if(nums[mid]>target){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
  }
  int main(){
    int nums[100],n,target;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"enter target: ";
    cin>>target;
    int first = firstOcc(nums, n, target);
    int last = lastOcc(nums, n, target);

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

  }