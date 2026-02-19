#include<iostream>
using namespace std;
int main(){
     int mat[3][3];
    int tar=8;
    bool flag=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>mat[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
              if(mat[i][j]==tar){
                flag=1;
                break;
              }
        }
    }
    if(flag==1){
        cout<<"element found";
    }else{
        cout<<"element not found";
    }
}