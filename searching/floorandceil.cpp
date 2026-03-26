#include<iostream>
using namespace std;
int floor(int nums[],int n,int target){
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
       if(nums[mid]<=target){
        ans=nums[mid];
       st=mid+1;
       }else{
        end=mid-1;
       }
    }
    return ans;
  }
  int ceil(int nums[],int n,int target){
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]>=target){
            ans=nums[mid];
            end=mid-1;
        }else {
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

    int floorvalue = floor(nums, n, target);
    int ceilvalue = ceil(nums, n, target);

    cout << "Floor  Value : " << floorvalue << endl;
    cout << "Ceil Value : " << ceilvalue << endl;

  }