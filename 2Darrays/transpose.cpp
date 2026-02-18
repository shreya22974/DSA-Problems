#include<iostream>
using namespace std;
int main(){
  int r,c;
    cin>> r>> c;
    int mat1[r][c],mat[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>mat1[i][j];
        }
    }
  for(int i=0;i<r;i++){
    for(int j=i+1 ;j<c;j++){
        swap(mat1[i][j],mat1[j][i]);
    }
  }
   for(int i=0;i<r;i++){
    for(int j=0 ;j<c;j++){
       cout<<mat1[i][j]<<" ";
    }
    cout<< endl;
  }
}