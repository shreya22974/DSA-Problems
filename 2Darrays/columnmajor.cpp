#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<< "enter rows and cols: ";
    cin>> row >> col;
    int mat[row][col];
    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
     for(int j=0;j<col;j++){
        for (int i=0;i<row;i++){
            cout<<mat[i][j]<<" ";
        }
    }

}