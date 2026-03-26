#include<iostream>
using namespace std;
int main(){
    int r=3,c=3;
    int mat[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>mat[i][j];
        }
    }
    int top=0,bottom=3,right=3,left=0;
    while (left<=right && top<=bottom){
          //right
    for(int i=left;i<right ;i++){
         cout<<mat[top][i];  
    }
    top++;
    //bottom
    for(int i=top;i<bottom;i++){
        cout<<mat[i][right];
    }
    right--;
    //left
    for(int i=right;i>=left;i--){
        cout<<mat[bottom][i];
    }
    bottom--;
    //top
    for(int i=bottom;i>=top;i--){
        cout<<mat[i][left];
    }
    left++;
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          cout<<mat[i][j]<<" ";
        }
    }
}