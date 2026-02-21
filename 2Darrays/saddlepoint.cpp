#include<iostream>
#include <algorithm>
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
    for(int i=0;i<row;i++){
         int minVal = mat[i][0];
         int colIndex = 0;
      for(int j=0;j<col;j++){
               if(mat[i][j] < minVal) {
                minVal = mat[i][j];
                colIndex = j;
            }
    }
    int maxVal=mat[0][colIndex];
    for(int k=0;k<row;k++){
        if(mat[k][colIndex]>maxVal){
            maxVal=mat[k][colIndex];
        }
    }
    if(minVal==maxVal){
        cout<< "Saddle point: "<< maxVal<<endl;
    }
}
cout<<"No saddle point";
}