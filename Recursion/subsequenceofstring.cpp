#include<iostream>
#include<vector>
using namespace std;
void subsequence(string str,int idx,string curr,vector<string>&result){
    if(idx==str.length()){
        result.push_back(curr);
        return;
    }
 curr.push_back(str[idx]);
   subsequence(str,idx+1,curr,result);
  curr.pop_back();
  subsequence(str,idx+1,curr,result);
}
int main(){
    int n=3;
    string str="abc";
     vector<string>result;
     subsequence(str,0," ",result);
     for(string s: result){
        cout<<s<<endl;
     }
}