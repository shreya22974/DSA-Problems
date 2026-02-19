#include<iostream>
using namespace std;
int main(){
  int r,c;
  cout<<"enter number of rows and cols:";
    cin>> r>> c;
    int mat[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
   for(int i=0;i<c;i++){
    for(int j=0 ;j<r;j++){
       cout<<mat[j][i]<<" ";
    }
    cout<< endl;
  }
}