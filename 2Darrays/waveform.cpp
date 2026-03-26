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
        if(j%2==0){//its a even col print top to bottom
            for(int i=0;i<row;i++){
                cout<<mat[i][j]<<" ";
            }
        }else{//odd col print bottom to top 
          for(int i=row-1;i>=0;i--){
            cout<<mat[i][j]<<" ";
          }
        }
    }
}