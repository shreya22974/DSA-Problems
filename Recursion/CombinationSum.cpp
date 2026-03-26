#include<iostream>
#include<vector>
using namespace std;
void combinationSum(vector<int>&nums,int idx,vector<int>curr,int target,vector<vector<int>>&result){
     if(idx= =nums.size()){
        if(target==0){
         result.push_back(curr); 
        }
        return;
     }
     if(nums[idx]<=target){
     curr.push_back(nums[idx]);
     combinationSum(nums,idx,curr,target-nums[idx],result);
      curr.pop_back();
     }
     
     combinationSum(nums,idx+1,curr,target,result);
}
int main(){
    vector<int>nums={2,3,4,5};
    vector<vector<int>>result;
    vector<int>curr;
    combinationSum(nums,0,curr,7,result);
    for(auto &row:result){
        for(auto &val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
   return 0;
}