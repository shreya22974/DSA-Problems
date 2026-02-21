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
    int maxCount=0;
    int maxRow=-1;
    for(int i=0;i<row;i++){
        int count=0;
        for (int j=0;j<col;j++){
           if(mat[i][j]==1){
            count++;
           }
        }
     if(count>maxCount){
        maxCount=count;
        maxRow=i;
     }
    }
    if(maxRow!=-1){
        cout<<"Row with max 1s is: "<<maxRow<<endl;
        cout<<"Row elements: ";
        for(int j=0;j<col;j++){
            cout<<mat[maxRow][j]<<" ";
        }
    }else{
        cout<<"No 1s found in matrix";
    }
}