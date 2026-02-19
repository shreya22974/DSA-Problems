#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no of rows and cols: ";
    cin>>r >> c;
    int mat[r][c];
    cout<<"Enter elements: ";
    //input of matrix 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    // int row=0,col=0;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(mat[i][j]==0){
            i=0;
            j=0;
           }
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
    }
}