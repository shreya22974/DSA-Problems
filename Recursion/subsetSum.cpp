#include<iostream>
#include<vector>
using namespace std;
void subsequence(string str,int idx,string curr,vector<string>&result,int sum){
    if(idx==str.length()){
        result.push_back(curr);
        return;
    }
 curr.push_back(str[idx]);
 sum+=str[idx];
 subsequence(str,idx+1,curr,result,sum);
 sum-=str[idx];
  curr.pop_back();
  subsequence(str,idx+1,curr,result,sum);
}
int main(){
    int n=3;
    string str="abc";
     vector<string>result;
     int sum=0;
     subsequence(str,0," ",result,sum);
     for(string s: result){
        cout<<s<<endl;
     }
}